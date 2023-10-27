#include "main.h"

/*
 * _strchr - a function that locates a character in a string.
 *@s: Pointer to the string to search
 *@c: The character to locate
 *
 *Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int l = 0;

	for (; s[l] >= '0'; l++)
	{
		if (s[l] == c)
			return (&s[l]);
	}
	return (0);
}
