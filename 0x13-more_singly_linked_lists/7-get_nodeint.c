#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node
 * of a listint_t linked list
 * @head: pointer to head node
 * @index: index of the nth node starting at 0
 *
 * Return: nth_node (nth node exits), NULL (nth node doesn't exist)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	/* traverese through  the linked list until you find nth node */
	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	/* check if the node does not exits */
	if (index > i)
		return (NULL);

	return (head);
}
