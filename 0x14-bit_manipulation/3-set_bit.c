#include "main.h"

/**
 * set_bit - sets the value of bit to 1
 * at given index
 * @n: given number
 * @index: given index
 *
 * Return: 1 (success), -1 (error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set, max_bits;

	/* get max number of bits of a number */
	max_bits = sizeof(unsigned long int) * 8 - 1;

	if (index > max_bits)
		return (-1);

	/* right shift 1 to index position(s) */
	set = 1 << index;
	/* set the bit at given index pointed to by n to 1 */
	*n = *n | set;

	return (1);
}
