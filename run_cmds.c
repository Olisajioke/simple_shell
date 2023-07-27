#include "shell.h"

/**
 * check_spaces - remove leading and trailing spaces
 * @input: string input
 * @read_line: length of string
 *
 * Return: 0
 */
void check_spaces(char *input, ssize_t read_line)
{
	char *start = input;

	while (*start == ' ' || *start == '\t')
		start++;
	char *end = input + read_line - 1;

	while (end > input && (*end == ' ' || *end == '\t' || *end == '\n'))
		end--;
	*(end + 1) = '\0';
}
