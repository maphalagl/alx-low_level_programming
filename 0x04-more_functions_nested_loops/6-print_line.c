#include "main.h"

/**
 * print_line - Prints a line of underscores.
 * @n: The number of underscores to print.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int l;

		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
