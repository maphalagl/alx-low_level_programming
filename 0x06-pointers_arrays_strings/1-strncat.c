#include "main.h"

/*
 * _strncat - function that concatenates two strings
 * @dest: The destination string.
 *@src: The source string to append to dest.
 *@n: The maximum number of characters to append.
 *
 * The function concatenates two strings and return a pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0, g = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	while (g < n && src[g] != '\0')
	{
	dest[l] = src[g];
	l++;
	g++;
	}
	dest[l] = '\0';
	return (dest);
}
