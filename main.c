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
	if (isatty(0))
		interactive_mode(envp);
	else
		non_interactive_mode(envp);
	return (0);
}

