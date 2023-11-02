#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		s[l] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}
