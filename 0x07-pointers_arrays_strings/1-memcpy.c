#include "main.h"

/*
 *_memcpy - the  function that copies memory area.
 *@dest: memory area where it is stored
 *@src: Source memory where it is copied
 *@n: number of bytes
 *
 *Return: Copies of memory with changed bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l = 0, g = n;

	for (; l < g; l++)
	{
		dest[l] = src[l];
		n--;
	}
	return (dest);
}
