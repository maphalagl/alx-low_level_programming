#include "main.h"

/**
 * _puts - Print a string followed by a newline.
 * @str: The input string to be printed.
 *
 * This function takes a string @str and prints it to the
 * standard output, followed by a newline character '\n'.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
