#include "main.h"
#include <math.h>

/**
 * print_binary - prints binary reperesentatation of a number
 * @n: input number
 */
void print_binary(unsigned long int n)
{
	unsigned long int exp, check;
	char bit;

	bit = 0;
	/**
	 * sizeof() calculates the max number of bits
	 * for an unsigned long int.
	 * pow(2,..) calculates 2 to power of max number - 1
	 */
	exp = pow(2, sizeof(unsigned long int) * 8 - 1);

	while (exp != 0)
	{
		/* check if current bit is set to 0 or 1 */
		check = n & exp;

		if (check == exp)
		{
			/* keep track 1 has been printed */
			bit = 1;
			putchar('1');
		}
		/**
		 * check if significant bits of a
		 * number have been  printed and
		 * print the remaining bits as 0
		 */
		else if (bit == 1 || exp == 1)
		{
			putchar('0');
		}
		/* right shift to the next bit of a number */
		exp >>= 1;
	}
}
