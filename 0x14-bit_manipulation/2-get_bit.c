#include "main.h"

/**
 * get_bit - get the value of a bit at given index
 * @n: number to check bits in
 * @index: index of a required bit
 *
 * Return: bit at index (success), 1 (error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int exp, check, max_bits;

	/* get the max number of bits in a number */
	max_bits = sizeof(unsigned long int) * 8 - 1;

	if (index > max_bits)
		return (-1);

	/* left shift 1 by index position(s) */
	exp = 1 << index;
	/* check if current bit is set to 0 or 1 */
	check = n & exp;

	if (check == exp)
		return (1);

	return (0);
}
