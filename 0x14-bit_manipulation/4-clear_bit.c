#include "main.h"

/**
 * clear_bit - sets the value of abit to 0.
 * @n: pointer to unsigned long int.
 * @index: index of the bit to set.
 * Return: if ir works -1. If an error occurs - -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);
	a = 1 << index;
	if (*n & a)
		*n ^= a;
	return (1);
}
