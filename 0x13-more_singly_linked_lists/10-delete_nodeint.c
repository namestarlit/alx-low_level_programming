#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at given index
 * @head: double pointer to head
 * @index: index of node to delete
 *
 * Return: 1 (success), -1 (failed)
 */
int delete_nodeint_at_index(lisint_t **head, unsigned int index)
{
	listint_t *c_node, *tmp;
	size_t i;

	if (head == NULL || *head == NULL)
		return (-1);

	c_node = *head;

	if (index == 0)
	{
		*head = c_node->next;
		free(c_node);
		return (1);
	}

	for (i = 0; i < index - 1 && c_node != NULL; i++)
		c_node = c_node->next;

	if (c_node == NULL || c_node->next == NULL)
		return (-1);

	tmp = c_node->next;
	c_node->next = tmp->next;
	free(tmp);
}
