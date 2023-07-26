#include "shell.h"

/**
 * interactive_mode - reading in interactive mode
 * @envp: environment variables
 *
 * Return: 0
 */
int interactive_mode(char **envp)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t read_line;
	int status = 0;

	while (1)
	{
		if (isatty(0))
			prompt();
		read_line = getline(&input, &len, stdin);
		if (read_line == -1)
			break;
		if (input[read_line - 1] == '\n')
			input[read_line - 1] = '\0';
		check_spaces(input, read_line);
		if (custom_strcmp(input, "exit"))
			break;
		if (custom_strcmp(input, "env"))
		{
			_printenv(envp);
			break;
		}
		if (!(*input))
			continue;
		else
			status = execute_command(input);
	}
	free(input);
	return (status);
}
