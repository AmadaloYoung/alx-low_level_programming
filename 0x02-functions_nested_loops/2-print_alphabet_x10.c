#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabet in lowercase
 *
 * void has no return value
 */

void print_alphabet_x10(void)

{
	int i = 0;
	char ch;

	while (i < 10)
	
	{
		ch = 'a';
		
		while (ch <= 'z')								{
													_putchar(ch);									
													ch++;
												}
		_putchar('\n');									
		i++;
	}
}
