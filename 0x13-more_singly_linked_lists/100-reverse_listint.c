#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: double pointer to head node
 *
 * Return: address of head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n_node, *p_node;

	n_node = NULL;
	p_node = NULL;

	while (*head != NULL)
	{
		/* store the next node in a varibale n_node */
		n_node = (*head)->next;
		/* reverse head to point to the preceeding node, p_node */
		(*head)->next = p_node;
		/* move pointer one position ahed */
		p_node = *head;
		*head = n_node;
	}
	/* assign the last node to be head */
	*head = p_node;
	return (*head);
}
