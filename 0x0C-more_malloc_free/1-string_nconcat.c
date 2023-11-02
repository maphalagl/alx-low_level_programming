#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l = 0, g = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l] != '\0')
	{
		l++;
	}

	while (s2[g] != '\0')
	{
		g++;
	}

	if (n > g)
	n = g;
	ptr = malloc((l + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (0);

	for (i = 0; i < l; i++)
	{
		ptr[i] = s1[i];
	}

	for (; i < (l + n); i++)
	{
		ptr[i] = s2[i - l];
	}
	ptr[i] = '\0';

return (ptr);
}
