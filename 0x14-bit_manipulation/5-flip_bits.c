#include "main.h"

/**
 * flip_bits - the number of bits you would need to
 *   flip to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int or = n ^ m, no_bits = 0;

	while (or > 0)
	{
		no_bits += (or & 1);
		or >>= 1;
	}

	return (no_bits);
}
