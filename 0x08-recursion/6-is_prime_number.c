#include <stdio.h>

/**
 * is_prime_number - returns for prime number
 * @n: number to check
 *
 * Return: 1 (prime), 0 (otherwise)
 */
int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}

/**
 * _is_prime - checks for a prime number
 * @n: number
 * @c: iterator
 *
 * Return: 1 (prime), 0 (otherwise)
 */
int _is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	else
	{
		return (_is_prime(n, c + 1));
	}
}
