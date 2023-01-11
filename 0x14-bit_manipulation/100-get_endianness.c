#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0if bif endian - 0. if little endian - 1.
 */

int get_endianness(void)
{
	unsigned int a;
	char *b;

	a = 1;
	b = (char *) &a;
	return ((int)*b);
}
