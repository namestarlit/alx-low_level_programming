#include "3-calc.h"

/**
 * op_add - sums two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: (a + b)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: (a - b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: (a * b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: (a / b)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Undefined");
		return (1);
	}

	return (a / b);
}

/**
 * op_mod - computes a remainder
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: (a % b)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Undefined");
		return (1);
	}
	return (a % b);
}
