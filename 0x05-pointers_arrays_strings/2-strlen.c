#include "main.h"

/**
 * _strlen - prints the lenght of a string
 * @s: string parameter
 *
 * Return: length of string (len)
 */

int _strlen(char *s)
{
	int i, len;

	i = 0;
	len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
