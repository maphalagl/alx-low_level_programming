#include "main.h"

/*
 * char *_strcpy - The functions copies the string pointed to by src
 * @dest: The destination buffer to copy to.
 * @src: The source string to copy from.
 *
 * Return: String
 */

char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';

	return (dest);
}
