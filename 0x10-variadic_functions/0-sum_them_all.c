#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all numbers
 * @n: count of numbers to add
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;

	va_start(numbers, n);

	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum);
}
