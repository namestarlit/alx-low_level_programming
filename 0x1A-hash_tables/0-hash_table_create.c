#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table with a given size
 * @size: The size of the hash table's array
 *
 * Return: A pointer to the newly created hash table or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Declare and initialize a pointer to the new hash table */
	hash_table_t *ht = NULL;

	/* Check if the size is valid */
	if (size < 1)
	{
		return (NULL);
	}

	/* Allocate memory for the new hash table */
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
	{
		return (NULL);
	}

	/* Initialize the hash table's size and array */
	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	/* Return the newly created hash table */
	return (ht);
}

