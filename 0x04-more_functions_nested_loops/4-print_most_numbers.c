#include "main.h"

/**
 * print_most_numbers - Prints most of the numbers from 0 to 9, excluding 2 and 4.
 */

void print_most_numbers(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		if(!(d == '2' || d == '4'))
			_putchar(d);
	}

	_putchar('\n');
}
