#include "lists.h"

/**
 * sum_listint - computes sum of all the data(n) of
 * a listint_t linked list.
 * @head: pointer to head node
 *
 * Return: sum, 0 (if list if empty)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	/* check if linked list is empty */
	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		/* increment sum by adding nth value */
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
