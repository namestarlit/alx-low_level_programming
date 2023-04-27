#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key from a hash table
 * @ht: pointer to the hash table
 * @key: pointer to the key to look for
 *
 * Return: pointer to the value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *current_node;

	/* check if the hash table or key is NULL */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* get the index of the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* traverse the linked list at the index until the key is found */
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	/* key was not found */
	return (NULL);
}
