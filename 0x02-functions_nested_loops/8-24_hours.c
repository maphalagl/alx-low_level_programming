#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int l, g, m, j;

	for (l = 0; l <= 2; l++)
	{
	for (g = 0; g <= 9; g++)
	{
	if ((l <= 1 && g <= 9) || (l <= 2 && g <= 3))
	{
	for (m = 0; m <= 5; m++)
	{
	for (j = 0; j <= 9; j++)
	{
	_putchar(l + '0');
	_putchar(g + '0');
	_putchar(58);
	_putchar(m + '0');
	_putchar(j + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
