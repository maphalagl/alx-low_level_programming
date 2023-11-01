#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *g;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	g = malloc(sizeof(char) * (i + 1));

	if (g == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		g[r] = str[r];

	return (g);
}
