#include "main.h"

/*
 *string_toupper - function that changes all lowercase letters of a string to uppercase.
 *@str: The input string.
 *
 * The function return a pointer to the string that is modified.
 */

char *string_toupper(char *i)
{
	int l = 0;

	while (i[l] != '\0')
	{
		if (i[l] >= 'a' && i[l] <= 'z')
			i[l] = i[l] - 32;
		l++;
	}
	return (i);
}
