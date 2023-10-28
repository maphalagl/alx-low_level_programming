#include "main.h"

/*
 * _strcmp - function that compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * The function compare two strings and return an integer < , = or > 0;
 */

int _strcmp(char *s1, char *s2)
{
	int l = 0;

	while (s1[l] != '\0' && s2[l] != '\0')
	{
		if (s1[l] != s2[l])
		{
			return (s1[l] - s2[l]);
		}
		l++;
	}
	return (0);
}
