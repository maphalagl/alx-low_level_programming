#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int l, g, m;

	for (l = 0; l < 10; l++)
	{
		for (g = 0; g < 10; g++)
		{
			m = g * l;
			if (g == 0)
			{
				_putchar(m + '0');
			}

			if ((m < 10) && (g != 0))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			} else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
