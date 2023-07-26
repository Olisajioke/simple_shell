#include "shell.h"

/*
 *non_interactive_mode- handles the non interractive part of the code.
 *@envp: the enviroment.
 *Return: 0.
 */


void non_interactive_mode(char **envp)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t read_line;

	while ((read_line = getline(&input, &len, stdin)) != -1)
	{
	if (input[read - 1] == '\n')
	input[read - 1] = '\0';


	if (*input)
	{
	if (custom_strcmp(input, "exit"))
	{
		break;
		}
		if (custom_strcmp(input, "env"))
		{
		_printenv(envp);
		}
	else
	{
		execute_command(input);
		exit(EXIT_SUCCESS);
	}
	}
	}
	fre(input);
}
