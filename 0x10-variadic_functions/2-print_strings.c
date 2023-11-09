#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int l;
	char *stng;

	va_start(arg, n);

	for (l = 0; l < n; l++)
	{
		stng = va_arg(arg, char *);

		if (stng)
		{
			printf("%s", stng);
		}
		else
		{
			printf("(nil)");
		}

		if (l < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}

	printf("\n");
	va_end(arg);
}
