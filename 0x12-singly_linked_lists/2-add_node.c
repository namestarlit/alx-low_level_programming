#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of the singly linked list
 * @head: head node
 * @str: stores a string
 *
 * Return: head (new head node)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
