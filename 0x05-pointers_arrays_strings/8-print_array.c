#include "main.h"
#include <stdio.h>

/*
 * print_array - prints n elements of an array of integers.
 *
 * @a: pointer to the int
 * @n: no of array
 *
 *Return: void
 */

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);

		if (l != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
