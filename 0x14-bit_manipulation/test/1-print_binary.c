#include "../main.h"
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
	exp = pow(2, sizeof(unsigned long int) * 8 - 1);

	while (exp != 0)
	{
		check = n & exp;
		
		if (check == exp)
		{
			bit = 1;
			putchar('1');
		}
		else if (bit == 1 || exp == 1)
		{
			putchar('0');
		}
		exp >>= 1;
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
