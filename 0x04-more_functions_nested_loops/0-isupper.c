#include "main.h"

/**
 * _isupper - checks uppercase character
 * @c: character checked
 *
 * Return: 1 (uppercase), 0 (otherwise)
 */

int _isupper(int c)
{
	int i;

	if (i >= 65 && i <= 90)
		return (1);
	else
		return (0);
}
