#include "shell.h"

/**
 * execute_command - executes the inpute read from the user
 * @input: standard input from user.
 * Return: 0 if successful,
 * -1 if error is encountered
 */
int execute_command(char *input)
{
	const char delimiters[] = " ";
	char *new_process[BUFFER_SIZE] = {0};
	char *new_environ[] = {NULL};
	struct stat st;
	int i = 0;
	char *token = strtok(input, delimiters);

	while (token != NULL && i < BUFFER_SIZE - 1)
	{
	new_process[i++] = token;
	token = strtok(NULL, delimiters);
	if (custom_strcmp(new_process[0], "ls"))
		new_process[0] = "/bin/ls";
	}
	new_process[i] = NULL;
	if (stat(new_process[0], &st) == 0 && (st.st_mode & S_IXUSR))
	{
	pid_t pid = fork();

	if (pid == -1)
	{
	perror("fork");
	exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
	if (execve(new_process[0], new_process, new_environ) == -1)
	{
	perror(new_process[0]);
	exit(EXIT_FAILURE);
	}
	}
	else
		wait(NULL);
	}
	else
		perror(new_process[0]);
	return (0);
}
