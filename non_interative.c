#include "shell.h"

/*
 * non_interactive - handles the non interractive part
 * @envp: the enviroment.
 * Return: 0.
 */
void non_interactive(char **envp)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t read_line;

	while ((read_line = getline(&input, &len, stdin)) != -1)
	{
	if (input[read_line - 1] == '\n')
	input[read_line - 1] = '\0';


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
	}
	}
	}
	free(input);
}
