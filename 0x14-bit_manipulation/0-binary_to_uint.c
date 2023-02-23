#include "main.h"

/**
 * binary_to_uint - converts a binary into unsigned int
 * @b: binary number string
 *
 * Return: u_int (converted unsigned int number), 0 if b is NULL or not binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u_int = 0;
	size_t i;

	if (b == NULL)
		return (0);

	/* iterate through string b */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* check if string b is a valid binary number */
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* left shift u_int by 1 */
		u_int <<= 1;

		/* if current char is 1, increment u_int by 1 */
		if (b[i] == '1')
			u_int++;
	}

	return (u_int);
}
