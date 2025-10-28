LIBFT = ./libft/libft.a

CLIENT_SRC = client.c

CLIENT = client

SERVER = server

OBJ = client.o

SERVER_SRC = server.c

OBJ_SRC = server.o

%.o:%.c
	$(CC) -c $<

CC = cc -g -O1

FLAG = -Wall -Werror -Wextra

RM = rm -f

all: $(CLIENT) $(SERVER)

$(LIBFT):
	make -C ./libft

$(CLIENT) : $(OBJ) $(LIBFT)
	@$(CC) $(OBJ) -L./libft -lft -o $@

$(SERVER) : $(OBJ_SRC) $(LIBFT)
	@$(CC) $(OBJ_SRC) -L./libft -lft -o $@

clean:
	@$(RM) $(OBJ)
	@$(RM) $(OBJ_SRC)
	@$(MAKE) -C ./libft clean

fclean:clean
	@$(RM) $(SERVER)
	@$(RM) $(CLIENT)
	@$(MAKE) -C ./libft fclean

re: fclean all

./PHONY: all clean fclean re
