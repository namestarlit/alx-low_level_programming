#include "main.h"

/**
 * flip_bits - computes the number of bits
 * to be flipped to get to another given number
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: no_bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, no_bits = 0;
	unsigned long int max_bits, bit, flip;

	/* get the max number of bits of a number */
	max_bits = sizeof(unsigned long int) * 8 - 1;
	/* flip the bits */
	flip = n ^ m;

	/* Iterate starting with the most significant bit */
	for (i = max_bits; i >= 0; i--)
	{
		/* right shift to position i */
		bit = flip >> i;

		/* check if current bit is set to 1 */
		if (bit & 1)
			no_bits++;
	}
	return (no_bits);
}
