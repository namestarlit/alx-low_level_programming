#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *c_node, *n_node;

	/* assign head to current node */
	c_node = head;

	while (c_node != NULL)
	{
		/* assign pointer to next node to next node */
		n_node = c_node->next;
		free(c_node);

		/* assigne next node to current node */
		c_node = n_node;
	}
}
