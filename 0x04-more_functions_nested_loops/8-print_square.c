#include "main.h"

/**
 * print_square - Prints a square of a given size using '#'.
 * @size: The size of the square.
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int l, g;

		for (l = 0; l < size; l++)
		{
			for (g = 0; g < size; g++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
