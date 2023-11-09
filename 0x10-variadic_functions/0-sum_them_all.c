#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of the arguments.
 *
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int l;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(arg, n);

	for (l = 0; l < n; l++)
	{
		sum += va_arg(arg, int);
	}

	va_end(arg);

	return (sum);
}
