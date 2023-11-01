#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *coct;
	int l, g;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = g = 0;
	while (s1[l] != '\0')
		l++;
	while (s2[g] != '\0')
		g++;
	coct = malloc(sizeof(char) * (l + g + 1));

	if (coct == NULL)
		return (NULL);
	l = g = 0;
	while (s1[l] != '\0')
	{
		coct[l] = s1[l];
		l++;
	}

	while (s2[g] != '\0')
	{
		coct[l] = s2[g];
		l++, g++;
	}
	coct[l] = '\0';
	return (coct);
}
