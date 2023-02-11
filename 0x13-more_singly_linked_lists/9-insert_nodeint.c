#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given
 * index in a listint_t linked list
 * @head: double pointer to head node
 * @idx: index of the node
 * @n: value to store in the node
 *
 * Return: new node address,
 * NULL (idx does not exists or failed to allocate memory
 * for the new node).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	size_t i;

	/* allocate memory for the new node */
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* assign the value of n */
	new_node->n = n;

	/* if idx does not exist */
	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		/* traverse the linked list to index */
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
		{
			/* change current node to next node */
			tmp = tmp->next;
		}
	}
	/* insert at the beginning if idx == 0) */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		/* assign new node to point to the tmp->next node */
		new_node->next = tmp->next;
		/* assign tmp->next to point to new node */
		tmp->next = new_node;
	}
	return (new_node);
}
