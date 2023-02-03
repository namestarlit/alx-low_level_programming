#include "lists.h"

/**
 * free_list - frees (deletes) list_t list
 * @head: head node
 */
void free_list(list_t *head)
{
	list_t *ptr, *preptr;

	ptr = head;

	while (ptr != NULL)
	{
		preptr = preptr->next;
		free(ptr->str);
		free(ptr);

		ptr = preptr;
	}
}
