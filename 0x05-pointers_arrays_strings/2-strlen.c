#include "main.h"

/**
 * _strlen - prints the lenght of a string
 * @s: string parameter
 *
 * Return: length of string (len)
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; ++i)
		;
	return (i);
}
