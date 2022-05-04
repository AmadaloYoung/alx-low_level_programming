#include "main.h"

/**
 * *_strcpy - copies the function pointed to by src
 * @dest: destination of return value
 * @src: string
 * Return: Always 1
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
		{
			break;
		}
		count++;
	}
	return (dest);
}
