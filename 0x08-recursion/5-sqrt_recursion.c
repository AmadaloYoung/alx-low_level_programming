#include "main.h"

/**
 * find_root - finds the squareroot of a number
 * @num: the value
 * @root: root to be tested
 * Return: the value of find_root
 */
int find_root(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
	return (find_root(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_root(n, root));
}
