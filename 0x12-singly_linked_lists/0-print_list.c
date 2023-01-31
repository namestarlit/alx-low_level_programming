#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: head node of singly linked list
 *
 * Return: no_el (no of elements)
 */
size_t print_list(const list_t *h)
{
	size_t no_el;

	no_el = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n",h->len, h->str);
		h = h->next;
		no_el++;
	}
	return (no_el);
}
