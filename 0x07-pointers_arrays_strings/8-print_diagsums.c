#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: 2d array of characters
 * @size: number of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, num1, num2;

	num1 = 0;
	num2 = 0;

	i = 0;
	while (i < size)
	{
		num1 = num1 + *(a + i * size + i);
		num2 = num2 + *(a + i * size + size - i - 1);
		i++;
	}
	printf("%i, %i\n", num1, num2);
}
