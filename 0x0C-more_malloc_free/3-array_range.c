#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr, i = 0, size = min;

	if (min > max)
		return (0);
	ptr = malloc((max - min + 1) * sizeof(int));

	if (!ptr)
		return (0);
	while (i <= max - min)
		ptr[i++] = size++;
	return (ptr);
}
