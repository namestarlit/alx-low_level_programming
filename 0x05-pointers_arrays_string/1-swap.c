#include "main.h"

/**
 * swap_int - swaps values of
 * two integers
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
