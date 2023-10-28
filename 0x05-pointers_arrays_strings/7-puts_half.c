#include "main.h"

/*
 *puts_half - prints half of a string, followed by a new line.
 *@str: the string input
 *
 * Calculates the Strings length and print second half from middle character.
 */

void puts_half(char *str)
{
	int length = 0;
	int n;
	int l;

	while (str[length] != '\0')
	{
		length++;
	}

	n = (length - 1) / 2;

	for (l = (n + 1); l < length; l++)
	{
		_putchar(str[l]);
	}

	_putchar('\n');
}
