#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *c_node, *n_node;

	/* assign head to current node */
	c_node = *head;

	while (c_node != NULL)
	{
		/* assign pointer to next node to next node */
		n_node = c_node->next;
		free(c_node);

		/* assign next node to current node */
		c_node = n_node;
	}
	/* set head to NULL */
	*head = NULL;
}
