#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: head node of singly linked list
 *
 * Return: no_el (no of elements)
 */
size_t print_list(const list_t *h)
{
	list_t *ptr;
	size_t no_el;

	ptr = h;
	no_el = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n",ptr->len, ptr->str);
		ptr = ptr->next;
		no_el++;
	}
	return (no_el);
}
