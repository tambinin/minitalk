# Minitalk
![42 School Project](https://img.shields.io/badge/42-Project-white?style=flat&logo=42&color=000)

## Description
A small data exchange program using UNIX signals.

### Requirements
- Unix-like operating system
- GCC compiler
- GNU Make

### Features
#### Mandatory
- Server and client executables
- Communication using only UNIX signals (SIGUSR1 & SIGUSR2)
- String transmission from client to server
- Server acknowledgment
- Support for Unicode characters

### Building
```bash
make        # Compile both server and client
make clean  # Remove objects
make fclean # Remove objects and binaries
make re     # fclean + all
```

### Usage
1. Start the server:
```bash
./server
# Server displays its PID
```

2. Send message with client:
```bash
./client [server_pid] "Your message here"
```

### Testing
```bash
# Terminal 1
./server

# Terminal 2
./client [PID] "Hello, World!"
./client [PID] "Test avec émojis 👋"
./client [PID] "Test très long..."
```

### Authors
- @tambinin (42 login)
