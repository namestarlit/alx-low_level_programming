#include "lists.h"

/**
 * print_listint - prints all elements of listint_t list
 * @h: head node
 *
 * Return: no_nodes (no. of nodes)
 */
size_t print_listint(const listint_t *h)
{
	listint_t *ptr = h;
	size_t no_nodes = 0;

	while (ptr != NULL)
	{
		printf("%d", ptr->n);
		ptr = ptr->next;
		no_nodes++;
	}
	return (no_nodes);
}
