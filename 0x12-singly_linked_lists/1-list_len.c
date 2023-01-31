#include "lists.h"

/**
 * list_len - prints no of elements of a linked list
 * @h: head node
 *
 * Return: no_el (no. of elements)
 */
size_t list_len(const list_t *h)
{
	size_t no_el = 0;

	while (h != NULL)
	{
		no_el++;

		h = h->next;
	}

	return (no_el);
}
