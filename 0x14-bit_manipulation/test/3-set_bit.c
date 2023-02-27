#include "../main.h"

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
	unsigned long int s, max_bits;

	/* get max number of bits of a number */
	max_bits = sizeof(unsigned long int) * 8 - 1;

	if (index > max_bits)
		return (-1);

	/* right shift 1 to index position(s) */
	s = 1 << index;
	/* set the bit at given index pointed to by n to 1 */
	*n = *n | s;

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
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}
