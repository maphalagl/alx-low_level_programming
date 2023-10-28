#include "main.h"

/*
 *leet - function that encodes a string into 1337.
 *@str: The input string.
 *
 *Returns a pointer to the string that is modified.
 */

char *leet(char *n)
{
	int l, g;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (l = 0; n[l] != '\0'; l++)
	{
		for (g = 0; g < 10; g++)
		{
			if (n[l] == c1[g])
			{
				n[l] = c2[g];
			}
		}
	}
	return (n);
}
