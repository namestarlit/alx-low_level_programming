#include "lists.h"

/**
 * free_list - frees (deletes) list_t list
 * @head: head node
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);

		/* assign head to next node */
		current = next;
	}
}
