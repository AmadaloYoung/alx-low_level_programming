#include "main.h"

/**
 * isit_primenumber - checks if a number is a prime number
 * @n: integer
 * @m: integer
 * Return: if prime number prints 1, otherwise 0
 */
int isit_primenumber(unsigned int n, unsigned int m)
{
	if (n % m == 0)
	{
		if (n == m)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + isit_primenumber(n, m + 1));
}

/**
 * is_prime_number - checks if number is a prime number
 * @n: integer/number
 * Return: if prime number prints 1, otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (isit_primenumber(n, 2));
}
