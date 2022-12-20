#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	unsigned int k = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + k) != '\0')
	{
		if (size > 0 && (*(s + k) < '0' || *(s + k) > '9'))
			break;

		if (*(s + k) == '-')
			pn *= -1;

		if ((*(s + k) >= '0') && (*(s + k) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		k++;
	}

	for (i = k - size; i < k; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}

	return (oi * pn);
}
