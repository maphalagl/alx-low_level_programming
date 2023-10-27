#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line.
 * return (void);
 */
void print_numbers(void)
{
    char d;

    for (d = '0'; d <= '9'; d++)
    {
        _putchar(d);
    }

    _putchar('\n');
}
