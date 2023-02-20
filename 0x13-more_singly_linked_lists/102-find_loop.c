#include "lists.h"

/**
 * find_listint_loop - finds the loop contained in a listint_t
 * linked list
 * @head: pointer to head node
 *
 * Return: pointer to head, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, pptr;

	/* check if linked list is empty */
	if (head == NULL || head->next == NULL)
		return (NULL);

	ptr = head->next;
	pptr = (head->next)->next;

	while (pptr)
	{
		if (ptr == pptr)
		{
			ptr = head;

			while (ptr != pptr)
			{
				ptr = ptr->next;
				pptr = pptr->next;
			}
			return (ptr);
		}

		ptr = ptr->next;
		pptr = (pptr->next)->next;
	}
	return (NULL);
}
