#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * (the order multi-byte data types are stored in mememory)
 *
 * Return: 0 (big endian), 1 (little endian)
 */
int get_endianness(void)
{
	int x = 1;
	char *ptr;

	/**
	 * typecast int to char pointer.
	 * if it's little endian system x (0x0001) will be stored
	 * as (0x1000), the LSB 1 stored first.
	 * if it's big endian system x will be stored
	 * as (0x0001), the MSB 0 stored first.
	 */
	ptr = (char *)&x;

	return (*ptr);
}
