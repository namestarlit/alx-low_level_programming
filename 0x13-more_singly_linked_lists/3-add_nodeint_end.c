#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of
 * listint_t list
 * @head: head node
 * @n: integer(int)
 *
 * Return: head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	/* allocate memory for new node */
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* assign value to new node element n */
	new_node->n = n;
	/* assign new node pointer to point to NULL */
	new_node->next = NULL;
	tmp = *head;

	/* assign new_node to head if it's the first node */
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		/* traverse list until you get to the last node */
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		/* assign pointer in tail node to point to new node */
		tmp->next = new_node;
	}
	return (*head);
}
