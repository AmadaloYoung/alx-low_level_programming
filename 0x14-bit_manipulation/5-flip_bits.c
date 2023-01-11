#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: first bit.
 * @m: second bit.
 * Return: number of bits you would like to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bits;

	for (n_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			n_bits++;
	}
	return (n_bits);
}
