#include "shell.h"

/**
 *_putchar - Writes a character to the standard output.
 *@c: The character to be written.
 *Return: On success, the character written is returned. On error,
 *-1 is returned.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}


/**
 *_printstring - loops through a string as characters to the standard output.
 *@str: The string to be looped.
 *Return: On success, the character written is returned.
 *On error, -1 is returned.
 */

char _printstring(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (0);
}

/**
 *custom_strcmp - compares two strings and puts out
 *to the standard output.
 *@str1: The first string to be compared
 *@str2: The second string to be compared
 *Return: On success, the character written is returned.
 *On error, -1 is returned.
 */

int custom_strcmp(const char *str1, const char *str2)
{
while (*str1 && *str2 && *str1 == *str2)
{
str1++;
str2++;
}
return (*str1 == *str2);
}


