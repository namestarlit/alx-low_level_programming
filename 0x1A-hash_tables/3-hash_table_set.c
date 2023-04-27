#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates a key-value pair in a hash table.
 * @ht: Pointer to the hash table
 * @key: The key string
 * @value: The value string associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/* Find the index for this key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the index */
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			/* If key exists, update its value */
			if (node->value)
				free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}

	/* If key not found, create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Insert the new node at the head of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
