#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int m, n;
	char *ch;

	m = 0;
	while (s[m] != '\0')
	{
		n = 0;
		while (accept[n] != '\0')
		{
			if (accept[n] == s[m])
			{
				ch = &s[m];
				return (ch);
			}
			n++;
		}
		m++;
	}
	return (0);
}
