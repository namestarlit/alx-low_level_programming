#include "lists.h"

/**
 * free_list - frees (deletes) list_t list
 * @head: head node
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head != NULL)
	{
		ptr = head;

		while (ptr != NULL)
		{
			ptr = head;
			head = head->next;
			free(ptr->str);
			free(ptr);
		}
	}
	return (head);
}
