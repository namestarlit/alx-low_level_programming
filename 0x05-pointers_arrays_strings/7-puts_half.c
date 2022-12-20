#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string argument
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			j = i / 2;
		else
			j = (i - 1) / 2;
		for (j++; j < i; j++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
