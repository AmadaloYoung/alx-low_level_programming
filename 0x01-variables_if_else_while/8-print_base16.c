#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int ch;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
