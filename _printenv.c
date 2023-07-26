#include "shell.h"

/**
 * _printenv - prints the environment variable
 *
 * @envp: takes the envp argument from main
 * Return: void
 */
void _printenv(char **envp)
{
		while (*envp != NULL)
		{
			_printstring(*envp);
			_printstring("\n");
			envp++;
		}
}
