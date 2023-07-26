#include "shell.h"

/**
 * main - a shell program
 * @ac: count of arguments
 * @arvg: arguments
 * @envp: environment variables
 * Return: 0
 */
int main(__attribute((unused)) int ac,
		__attribute((unused)) char **arvg,
		__attribute((unused)) char **envp)
{
	int status = 0;

	status = interactive_mode(envp);
	return (status);
}

