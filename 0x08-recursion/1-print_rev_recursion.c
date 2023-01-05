#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse order
 * @s: input string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
