#include "lists.h"

/**
 * listint_len - computes number of elements in
 * a listint_t list
 * @h: head node
 *
 * Return: no_el (no. of elements)
 */
size_t listint_len(const listint_t *h)
{
	size_t no_el = 0;

	while (h != NULL)
	{
		h = h->next;
		no_el++;
	}
	return (no_el);
}
