/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tambinin <tambinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:25:19 by tambinin          #+#    #+#             */
/*   Updated: 2024/07/09 14:35:49 by tambinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <stdlib.h>
# include <signal.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct s_list
{
	struct s_list	*next;
	char			data;
}					t_list;
void	get_signal(int signal);
void	send_signal(int pid, char c);

#endif