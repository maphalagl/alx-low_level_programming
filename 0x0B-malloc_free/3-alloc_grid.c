#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int i, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(int *) * height);

	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(int) * width);

		if (g[i] == NULL)
		{
			for (; i >= 0; i--)
				free(g[i]);

			free(g);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (l = 0; l < width; l++)
			g[i][l] = 0;
	}

	return (g);
}
