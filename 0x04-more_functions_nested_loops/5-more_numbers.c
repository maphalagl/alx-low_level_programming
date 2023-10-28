#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int l, g;

	for (l = 1; l <= 10; l++)
	{
		for (g = 0; g <= 14; g++)
		{
			if (g >= 10)
				_putchar('1');
			_putchar (g % 10 + '0');
		}
		_putchar('\n');
	}
}
