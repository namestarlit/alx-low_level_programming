#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: String to hash
 *
 * Return: Hash value of the string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381; /* Starting value of hash */
	int c;

	/* Iterate over each character in string and update hash value */
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
