#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 *
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	for (j < n; *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}

	return (dest);
}
