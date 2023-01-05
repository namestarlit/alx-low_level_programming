#include "main.h"

/**
 * _strlen_recursion - prints lenght of a string
 * @s: string input
 *
 * Return: string lenght, 0 otherwise
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}

/**
 * is_palindrome - checks for an empty string
 * @s: input string
 *
 * Return: 1 (true), 0 (otherwise)
 */
int is_palindrome(char *s)
{
	int _strlen;

	_strlen = _strlen_recursion(s);

	if (_strlen == 0)
		return (1);
	else if(_strlen == 1)
		return (1);
	else if (s[0] != s[_strlen - 1])
		return (1);

	return (is_palindrome(s + 1));
}
