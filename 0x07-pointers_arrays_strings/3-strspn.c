#include "main.h"

/*
 *_strspn - a function that gets the length of a prefix substring.
 *@s - input.
 *@accept - input.
 *Return: Always(0).
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;

	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				l++;
			}
			else if (accept[g + 1] == '\0')
			{
				return (g);
			}
			s++;
		}
		return (g);
	}
	return (0);
}
