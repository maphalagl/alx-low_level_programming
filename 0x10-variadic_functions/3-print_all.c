#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 *
 * @format: This is the format to print a value
 */

void print_all(const char * const format, ...)
{
	int l = 0;
	char *stng, *pes = "";

	va_list arg;

	va_start(arg, format);

	if (format)
	{
		while (format[l])
		{
			switch (format[l])
			{
				case 'c':
					printf("%s%c", pes, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%c", pes, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", pes, va_arg(arg, double));
					break;
				case 's':
					stng = va_arg(arg, char *);
					if (!stng)
						stng = "(nil)";
					printf("%s%s", pes, stng);
					break;
				default:
					l++;
					continue;
			}
			pes = ", ";
			l++;
		}
	}
	printf("\n");
	va_end(arg);
}
