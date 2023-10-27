#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes.
 * @n: The number of times to print the backslash.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int l, g;

		for (l = 0; l < n; l++)
		{
			for (g = 0; g < n; g++)
			{
				if (g == l)
					_putchar('\\');
				else if (g < l)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
