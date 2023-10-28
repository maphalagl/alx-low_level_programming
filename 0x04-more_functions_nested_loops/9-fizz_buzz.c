#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int l;

	for (l = 1; l <= 100; l++)
	{
		if (l % 3 == 0 && l % 5 != 0)
		{
			printf(" Fizz");
		} else if (l % 5 == 0 && l % 3 != 0)
		{
			printf(" Buzz");
		} else if (l % 3 == 0 && l % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (l == 1)
		{
			printf("%d", l);
		} else
		{
			printf(" %d", l);
		}
	}
	printf("\n");

	return (0);
}
