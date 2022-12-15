#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: digit to check
 *
 * Return: 1 (digit), 0 (otherwise)
 */

int _isdigit(int c)
{
	int i;

	if (i >= 48 && i <= 57)
		return (1);
	else
		return (0);
}
