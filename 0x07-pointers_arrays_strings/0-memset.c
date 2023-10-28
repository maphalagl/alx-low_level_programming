#include "main.h"

/*
 *_memset - function that fills memory with a constant byte.
 *@s: Pointer to the memory area to be filled
 *@b: The byte to fill the memory with
 *@n: Number of bytes to be changed
 *
 * Return: Changes Pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int l = 0;

	for (; n > 0; l++)
	{
		s[l] = b;
		n--;
	}
	return (s);
}
