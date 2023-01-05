#include "main.h"

/**
 * factorial - computes factorial of a number
 * @n: input number
 *
 * Return: factorial, -1 (for n < 0)
 */
int factorial(int n)
{
	if (n >= 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
