#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at given index
 * @head: double pointer to head
 * @index: index of node to delete
 *
 * Return: 1 (success), -1 (failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n_node, *p_node = *head;
	size_t i;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && p_node != NULL; i++)
			p_node = p_node->next;
	}

	if (p_node == NULL)
	{
		return (-1);
	}
	if (p_node->next == NULL && index != 0)
	{
		return (-1);
	}

	n_node = p_node->next;

	if (index != 0)
	{
		p_node->next = n_node->next;
		free(n_node);
	}
	else
	{
		free(p_node);
		*head = n_node;
	}
	return (1);
}
