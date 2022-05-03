#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n, bool;

	for (m = 0; *(s + m) != '\0'; m++)
	{
		bool = 1;
		for (n = 0; *(accept + n) != '\0'; n++)
		{
			if (*(s + m) == *(accept + n))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (m);
}
