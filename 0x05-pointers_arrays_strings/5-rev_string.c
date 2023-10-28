#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 *
 * This function reverses the characters in the string pointed to by @s.
 */

void rev_string(char *s)
{
	char rev = s[0];
	int g = 0;
	int l;

	while (s[g] != '\0')
	g++;
	for (l = 0; l < g; l++)
	{
		g--;
		rev = s[l];
		s[l] = s[g];
		s[g] = rev;
	}
}
