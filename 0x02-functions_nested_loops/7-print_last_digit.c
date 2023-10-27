#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @l: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int l)
{
	int g;


	g = l % 10;

	if (g < 0)
		g = g * -1;

	_putchar(g + '0');

	return (g);
}
