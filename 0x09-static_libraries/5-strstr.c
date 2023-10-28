#include "main.h"
#include <stddef.h>

/*
 *_strstr - a function that locates a substring.
 *@haystack - input.
 *@needle - input.
 *Return: Always (0)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *num1 = haystack;
		char *num2 = needle;

		while (*num1 == *num2 && *num2 != '\0')
		{
			num1++;
			num2++;
		}

		if (*num2 == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
