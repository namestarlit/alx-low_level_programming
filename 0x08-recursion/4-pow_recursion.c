#include "main.h"

/**
 * _pow_recursion - prints value of x raised by y
 * @x: number
 * @y: power
 *
 * Return: value of x^y, -1 (for y < 0)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
