#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

int prompt(void);
int _putchar(char c);
int interactive_mode(char **envp);
char _printstring(char *str);
void check_spaces(char *input, ssize_t read_line);
int execute_command(char *input);
int custom_strcmp(const char *str1, const char *str2);
void _printenv(char **envp);

#endif /*SHELL_H*/
