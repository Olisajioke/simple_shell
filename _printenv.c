#include "shell.h"

/**
 * _printenv - prints the environment variable
 *
 * @envp: takes the envp argument from main
 * Return: void
 */
void _printenv(char **envp)
{
	if (isatty(0))
	{
		while (envp)
		{
			_printstring(*envp);
			_printstring("\n");
			envp++;
		}
	}
	else
	{
		while (*envp)
		{
			_printstring(*envp);
			_printstring("\n");
			envp++;
		}
	}
}
