#include "../lists.h"

/**
 *free_listp - prints a listint_t linked list
 * @head: pointer to head node
 */
void free_listp(listp_t **head)
{
	listp_t *tmp, *c_node;

	if (head != NULL)
	{
		c_node = *head;

		while ((tmp = c_node) != NULL)
		{
			c_node = c_node->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a listint_t list
 * @head: pointer to head node
 *
 * Return: no. of nodes (success), exit(98) (failure)
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *new_node, *h_node, *add_node;
	size_t no_nodes = 0;

	h_node = NULL;

	while (head != NULL)
	{
		new_node = (listint_t *)malloc(sizeof(listint_t));
		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = h_node;
		h_node = new_node;

		add_node = h_node;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (head == add_node->p)
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free_listp(&h_node);
				return (no_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		no_nodes++;
	}

	free_listp(&h_node);
	return (no_nodes);
}
