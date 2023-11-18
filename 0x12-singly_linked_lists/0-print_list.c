#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: header pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cunt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
			h = h->next;
			cunt++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			cunt++;
		}
	}
	return (cunt);
}
