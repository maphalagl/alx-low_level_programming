#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int l;

	va_start(arg, n);

	for (l = 0; l < n; l++)
	{
		printf("%d", va_arg(arg, int));
		if (separator && l < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(arg);
}
