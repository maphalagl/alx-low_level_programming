#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * @str: The input string.
 *
 * Takes input, prints alternate chars and adds newline.
 */
void puts2(char *str)
{
	int l = 0;
	int g;

	while (str[l] != '\0')
	{
		l++;
	}
	for (g = 0; g < l; g += 2)
	{
		_putchar(str[g]);
	}
	_putchar('\n');
}
