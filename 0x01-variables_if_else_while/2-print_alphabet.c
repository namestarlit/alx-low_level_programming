#include <stdio.h>

/**
 * main - Prints alphabets
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');

	return (0);
}
