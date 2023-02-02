#include "lists.h"

/**
 * add_node_end - adds a node at the end of the
 * list_t list
 * @head: head node
 * @str: strores string argument
 *
 * Return: address of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr;
	size_t i;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new_node->len = i;
	new_node->next = NULL;
	ptr = *head;

	if (ptr == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new_node;
	}

	return (*head);
}
