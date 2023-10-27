#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * Print character c
 *
 * Return: On accomplishment 1.
 * On error, -1 is returned, and error is set correctly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
