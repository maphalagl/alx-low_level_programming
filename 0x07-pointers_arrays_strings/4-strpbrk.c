#include "main.h"

/*
 *_strpbrk - a function that searches a string for any of a set of bytes.
 *@s:input
 *@accept: input
 *
 *Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int l = 0, g = 0;

	for (; s[l] != '\0'; l++)
	{
		for (; accept[g] != '\0'; g++)
		{
			if (s[l] == accept[g])
				return (s + l);
		}
	}
	return (0);
}
