#include "shell.h"

/**
 * prompt - Displays the shell prompt
 * Return: 0.
 */
int prompt(void)
{
	char *str = "$ ";

	if (isatty(0))
	{
	_printstring(str);
	fflush(stdout);
	}
	return (0);
}
