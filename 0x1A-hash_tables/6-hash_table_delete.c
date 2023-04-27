#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table to delete.
 *
 * This function frees all memory allocated for the hash table and its nodes.
 * It first iterates through the hash table and frees all the nodes in each
 * bucket, then frees the array and finally the hash table structure itself.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	/* Save a pointer to the hash table to free at the end */
	hash_table_t *head = ht;

	/* Pointer to the current node and a temporary pointer for deleting nodes */
	hash_node_t *node, *tmp;

	/* Loop through each bucket in the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/* If the bucket is not empty */
		if (ht->array[i] != NULL)
		{
			/* Set node to the head of the bucket */
			node = ht->array[i];

			/* Iterate through the nodes in the bucket */
			while (node != NULL)
			{
				/* Save a pointer to the next node */
				tmp = node->next;

				/* Free the key, value and the node itself */
				free(node->key);
				free(node->value);
				free(node);

				/* Move to the next node */
				node = tmp;
			}
		}
	}

	/* Free the array and the hash table structure */
	free(head->array);
	free(head);
}
