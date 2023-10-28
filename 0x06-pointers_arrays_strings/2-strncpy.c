#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: The destination string.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy.
 *
 * It copies the string and return a pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;

	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}

	return (dest);
}
