#include "main.h"

/*
 * print_rev - prints a string, in reverse, followed by a new line
 *  @s: Input string to be printed in reverse.
 *
 *This function takes a string @s and prints it in reverse
 * order to the standard output, followed by a newline character '\n'.
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	for (l--; l >= 0; l--)
		_putchar(s[l]);

	_putchar('\n');
}
