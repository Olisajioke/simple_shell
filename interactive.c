#include "shell.h"

/**
 * interactive_mode - reading in interactive mode
 * @envp: environment variables
 *
 * Return: 0
 */
void interactive_mode(char **envp)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t read_line;

	while (1)
	{
		prompt();
		read_line = getline(&input, &len, stdin);
		if (read_line == -1)
		{
			free(input);
			break;
		}
		if (input[read_line - 1] == '\n')
			input[read_line - 1] = '\0';
		check_spaces(input, read_line);
		if (custom_strcmp(input, "exit"))
		{
			free(input);
			break;
		}
		if (custom_strcmp(input, "env"))
		{
			_printenv(envp);
		}
		if (!(*input))
		{
			continue;
		}
		else
			execute_command(input, envp);
	}
	free(input);
}
