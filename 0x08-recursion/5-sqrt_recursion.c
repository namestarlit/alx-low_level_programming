#include "main.h"

/**
 * _sqrt_recursion - calls a function to compute square root
 * @n: number to compute its square root
 *
 * Return: square root, -1 (no natura root)
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - computes square root of a number
 * @n: input number
 * @c: multiplier
 *
 * Return: sqrt of n, -1 (not natural root)
 */
int _sqrt(int n, int c)
{
	if (c * c == n)
		return (c);
	else if (c * c > n)
		return (-1);
	else
		return (_sqrt(n, c + 1));
}
