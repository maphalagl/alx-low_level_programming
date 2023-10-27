#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, g;

		for (l = 1; l <= size; l++)
		{
			for (g = l; g < size; g++)
			{
				_putchar(' ');
			}

			for (g = 1; g <= l; g++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

