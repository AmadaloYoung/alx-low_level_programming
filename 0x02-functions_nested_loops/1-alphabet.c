#include "main.h"

/**
 * main - Write a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return ; Always 0 (Success)
 */
void print_alphabet(void)
{ 
	char ch;

	for (ch='a' ; <='z' ; ch++){
		_putchar(ch);}
	putchar('\n')
}
