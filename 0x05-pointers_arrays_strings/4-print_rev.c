#include "main.h"

/**
 * _print_rev - prints string
 * @s: string argument
 */

void _print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		i++;

	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
