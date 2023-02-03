#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning
 * of a listint_t list
 * @head: head node
 * @n: integer (int)
 *
 * Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* allocate memory for the new node */
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* assign value of n to new_node element */
	new_node->n = n;
	/* point new node to head */
	new_node->next = *head;
	/* point head to new node */
	*head = new_node;

	return (*head);
}
