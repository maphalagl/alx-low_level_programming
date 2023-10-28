#include "main.h"

/**
 * swap_int - Swaps two integers.
 * @a: Pointer to the 1st integer.
 * @b: Pointer to the 2nd integer.
 *
 * Swap the values pointed to by @a and @b.
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
