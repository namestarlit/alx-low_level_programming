#include "hash_tables.h"

/**
 * hash_table_print - Prints all the elements of a hash table.
 * @ht: Hash table to print.
 *
 * Description: This function prints all the elements of a hash table.
 *              Each element is printed as follows: "key: value".
 *              If the hash table is NULL, nothing is printed.
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, size, count = 0;
	hash_node_t *node = NULL;

	if (ht != NULL)
	{
		size = ht->size;
		printf("{");
		for (i = 0; i < size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				count++;
				node = node->next;
			}
		}
		printf("}\n");
	}
}
