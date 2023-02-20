#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *c_node;

	if (head != NULL)
	{
		c_node = *head;
		while ((temp = c_node) != NULL)
		{
			c_node = c_node->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t no_nodes = 0;
	listp_t *tmp, *new_node, *add_node;

	tmp = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = tmp;
		tmp = new_node;

		add_node = tmp;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (head == add_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&tmp);
				return (no_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		no_nodes++;
	}

	free_listp(&tmp);
	return (no_nodes);
}
