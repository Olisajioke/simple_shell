#include "shell.h"

/**
 * non_interactive - handles the non interractive part
 * @envp: the enviroment.
 * Return: 0.
 */
void non_interactive(char **envp)
{
	char *input = NULL;
	ssize_t read_line;

	input = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	if (input == NULL)
	{
		_printstring("malloc");
	}

	while ((read_line = _getline(stdin, input, BUFFER_SIZE, '\n')) != -1)
	{
		if (input[read_line - 1] == '\n')
		{
			input[read_line - 1] = '\0';
		}
		if (*input)
		{
			if (custom_strcmp(input, "exit"))
				break;
			if (custom_strcmp(input, "env"))
				_printenv(envp);
		}
	else
	{
		execute_command(input, envp);
	}
	}
	free(input);
}
