#include "../main.h"

/**
 * clear_bit - sets value of a bit to 0
 * at given index
 * @n: pointer to given number
 * @index: given index
 *
 * Return: 1 (success), -1 (error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s, max_bits;

	/* get max number of bits */
	max_bits = sizeof(n) * 8;

	if (index > max_bits)
		return (-1);

	/* left shift 1 by index position */
	s = 1 << index;
	/* set bit at given index to 0 */
	*n &= ~s;

	return (1);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
