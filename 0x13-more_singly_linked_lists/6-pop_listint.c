#include "lists.h"

/**
 * pop_listint - prints and then deletes contents of
 * head node.
 * @head: pointer to head node
 *
 * Return: 0 (linked list is empty), n (head nodes data)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int no_data; /* number of head node data */

	/* check if linked list is empty */
	if (*head == NULL)
		return (0);

	/* assign n head->n to number of data */
	no_data = tmp->n;
	/* assign head to be the next node */
	*head = tmp->next;
	free(tmp);

	return (no_data);
}
