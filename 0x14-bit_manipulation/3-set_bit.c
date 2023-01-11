#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * @n: pointer to an unsigned long int.
 * @index: index of the bit.
 * Return: 1 if it works. -1 if an error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
	{
		return (-1);
	}
	a = 1 << index;
	*n = (*n | a);
	return (1);
}
