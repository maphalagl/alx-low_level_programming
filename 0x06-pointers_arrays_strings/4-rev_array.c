#include "main.h"

/*
 * reverse_array - function that reverses the content of an array of integer
 *@a: The integer array to be reversed.
 *@n: The number of elements in the array.
 *
 * Return: void;
 */

void reverse_array(int *a, int n)
{
	int l, g;

	for (l = 0; l < n--; l++)
	{
		g = a[l];
		a[l] = a[n];
		a[n] = g;
	}
}
