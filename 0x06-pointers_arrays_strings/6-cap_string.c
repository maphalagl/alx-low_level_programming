#include "main.h"

/*
 *cap_string -  function that capitalizes all words of a string.
 *@str: The input string.
 *
 *the function return capitalized first letter of each word of the string.
 */

char *cap_string(char *n)
{
	int l = 0;

	while (n[l])
	{
		while (!(n[l] >= 'a' && n[l] <= 'z'))
			l++;

		if (n[l - 1] == ' ' ||
		    n[l - 1] == '\t' || 
		    n[l - 1] == '\n' ||
		    n[l - 1] == ',' ||
		    n[l - 1] == ';' ||
		    n[l - 1] == '.' ||
		    n[l - 1] == '!' ||
		    n[l - 1] == '?' ||
		    n[l - 1] == '"' ||
		    n[l - 1] == '(' ||
		    n[l - 1] == ')' ||
		    n[l - 1] == '{' ||
		    n[l - 1] == '}' ||
		    l == 0)
		{
			n[l] -= 32;
		}

		l++;
	}

	return (n);
}
