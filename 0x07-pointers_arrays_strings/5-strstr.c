#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int m, n;

	for (m = 0; haystack[m] > '\0'; m++)
	{
		for (n = m; haystack[m] > '\0' && needle[n - m] > '\0'; n++)
		{
			if (haystack[n] != needle[n - m])
				break;

		}
		if (needle[n - m] == '\0')
			return (haystack + m);

	}
	return (0);
}
