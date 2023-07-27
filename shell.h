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
void interactive_mode(char **envp);
void non_interactive(char **envp);
char _printstring(char *str);
char *read_command(void);
void execute_command(char *input);
int custom_strcmp(const char *str1, const char *str2);
void _printenv(char **envp);
int _getline(FILE *str_input, char *str_output, int size, char delimiter);

#endif /*SHELL_H*/
