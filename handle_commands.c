#include "shell.h"

/**
 * check_spaces - function that checks leading and trailing spaces
 * @input: collects input from the user.
 * @read_line: size of the input.
 * return: NULL
 */

void check_spaces(char *input, ssize_t read_line)
{
	char *start;
	char *end;

	*start = input;
	while (*start == ' ' || *start == '\t')
	{
		start++;
	}

	*end = input + read_line - 1;
while (end > input && (*end == ' ' || *end == '\t' || *end == '\n'))
{
end--;
}
*(end + 1) = '\0';
}
