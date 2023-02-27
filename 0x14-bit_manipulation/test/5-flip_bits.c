#include "../main.h"

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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	n = flip_bits(1024, 1);
	printf("%u\n", n);
	n = flip_bits(402, 98);
	printf("%u\n", n);
	n = flip_bits(1024, 3);
	printf("%u\n", n);
	n = flip_bits(1024, 1025);
	printf("%u\n", n);
	return (0);
}
