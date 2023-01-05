#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: input string
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
		_putchar('\n');
	else
		return (_puts_recursion(s))
}
