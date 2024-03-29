#include "hash_tables.h"

/**
 * key_index - Get the index of a key in the hash table.
 * @key: A pointer to the key string.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key/value pair should be stored in the array
 *         of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Hash the key using djb2 algorithm and take the modulus */
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
