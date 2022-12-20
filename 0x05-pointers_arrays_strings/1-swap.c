#include "main.h"

/**
 * swap_int - swaps values of two
 * integers
 * @a: 1st integer
 * @b: 2nd integer
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
