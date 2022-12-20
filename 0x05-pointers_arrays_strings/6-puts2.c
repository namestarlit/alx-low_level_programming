#include "main.h"

/**
 * _puts - prints string
 * @str: string argument
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
