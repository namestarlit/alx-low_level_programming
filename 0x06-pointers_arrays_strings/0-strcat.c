#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: size from src in bytes
 *
 * Return: destination pointer
 */

char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
