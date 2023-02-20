#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
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
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t no_nodes = 0;
	listp_t *tmp, *new_node, *add_node;
	listint_t *c_node;

	tmp = NULL;
	while (*h != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)*h;
		new_node->next = tmp;
		tmp = new_node;

		add_node = tmp;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (*h == add_node->p)
			{
				*h = NULL;
				free_listp2(&tmp);
				return (no_nodes);
			}
		}

		c_node = *h;
		*h = (*h)->next;
		free(c_node);
		no_nodes++;
	}

	*h = NULL;
	free_listp2(&tmp);
	return (no_nodes);
}
