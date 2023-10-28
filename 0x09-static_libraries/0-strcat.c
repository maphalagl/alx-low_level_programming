#include "main.h"

/*
 * _strcat - function that concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 *
 * Return: A pointer to the destination string.
 */

char *_strcat(char *dest, char *src)
{
	int l, g;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	g = 0;
	while (src[g] != '\0')
	{
		dest[l] = src[g];
		l++;
		g++;
	}

	dest[l] = '\0';
	return (dest);
}
