#include "hash_tables.h"

/**
 * shash_table_create - function that creates a hash table.
 * @size: Size of the array
 * Return: pointer to the newly created hash table or NULL in wrong
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hash = NULL;

	if (size < 1)
	{
		return (NULL);
	}
	new_hash = calloc(1, sizeof(shash_table_t));
	if (!new_hash)
	{
		return (NULL);
	}
	new_hash->size = size;
	new_hash->array = calloc(size, sizeof(shash_node_t *));
	if (!new_hash->array)
	{
		free(new_hash);
		return (NULL);
	}
	return (new_hash);
}

/**
 * shash_table_set - function that adds an element to the hash table.
 * @ht:  is the hash table you want to add or update the key/value to
 * @key: key
 * @value: value associted with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *ptr, *new_node;

	if (ht == NULL || key == NULL || value == NULL ||
			(strcmp(key, "")) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			if (ptr->value)
				free(ptr->value);
			ptr->value = strdup(value);
			if (ptr->value == NULL)
				return (0);
			return (1);
		}
		ptr = ptr->next;
	}
	new_node = calloc(1, sizeof(shash_node_t));
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
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (sdbl_list(ht, new_node));
}


/**
 * sdbl_list - connect lists via double linked list.
 * @ht:  is the hash table you want to look into
 * @new_node: new node
 * Return:  the value associated with the element, or NULL if key
 *  couldn’t be found
 */
int sdbl_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *ptr = NULL;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return (1);
	}
	else
	{
		ptr = ht->shead;
		if (strcmp(new_node->key, ptr->key) < 0)
		{
			new_node->snext = ptr;
			new_node->sprev = NULL;
			ptr->sprev = new_node;
			ht->shead = new_node;
			return (1);
		}
		while (ptr->snext && strcmp(new_node->key, ptr->key) > 0)
			ptr = ptr->snext;
		if (ptr->snext == NULL && (strcmp(new_node->key, ptr->key) > 0))
		{
			new_node->sprev = ptr;
			ptr->snext = new_node;
			ht->stail = new_node;
			return (1);
		}
		new_node->snext = ptr;
		ptr->sprev->snext = new_node;
		new_node->sprev = ptr->sprev;
		ptr->sprev = new_node;
		return (1);
	}
}

/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht:  is the hash table you want to look into
 * @key: is the key you are looking for
 * Return:  the value associated with the element, or NULL if key
 *  couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	int index;
	shash_node_t *ptr;

	if (ht == NULL || key == NULL || (strcmp(key, "")) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}


/**
 * shash_table_print - Write a function that prints a hash table
 * @ht: hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned int count = 0;
	shash_node_t *ptr = NULL;

	if (ht != NULL)
	{
		ptr = ht->shead;
		printf("{");
		while (ptr)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			count++;
			ptr = ptr->snext;

		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - Write a function that reverse a hash table.
 * @ht: hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned int count = 0;
	shash_node_t *ptr = NULL;

	if (ht != NULL)
	{
		ptr = ht->stail;
		printf("{");
		while (ptr)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			count++;
			ptr = ptr->sprev;

		}
		printf("}\n");
	}
}

/**
 * free_list - function that adds a new node at the end of a list_t list
 * @head: pointer that point to the header node
 * Return: The adress of the new.
 */

void free_list(shash_node_t *head)
{
	shash_node_t *tmp, *aux;

	tmp = head;
	if (head)
	{
		while (tmp)
		{
			free(tmp->key);
			free(tmp->value);
			aux = tmp->next;
			free(tmp);
			tmp = aux;
		}
	}
}

/**
 * shash_table_delete - Write a function that deletes a hash table.
 * @ht: hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned int i, size;

	if (ht == NULL)
		return;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != NULL)
			free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
