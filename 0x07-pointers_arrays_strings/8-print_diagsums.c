#include "main.h"
#include <stdio.h>

/*
 * print_diagsums - The Entry point of the program.
 *@a - input
 *@size - input
 *Return: Always (0)
 */

void print_diagsums(int *a, int size)
{
	int firstSum = 0, secondSum = 0, x, l;

	for (x = 0; x <= (size * size); x = x + size + 1)
	{
		firstSum += a[x];
	}
	for (l = size - 1; l <= (size * size) - size; l = l + size - 1)
	{
		secondSum += a[l];
	}
	printf("%d, %d\n", firstSum, secondSum);
}
