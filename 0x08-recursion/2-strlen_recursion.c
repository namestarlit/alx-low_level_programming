#include "main.h"

/**
 * _strlen_recursion - prints lenght of a string
 * @s: string input
 *
 * Return: string lenght
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return(1 + _strel_recursion(s + 1));
	}
}
