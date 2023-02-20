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

/**
 * add_nodeint - adds new node at the beginning
 * of a listint_t list
 * @head: head node
 * @n: integer (int)
 *
 * Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* allocate memory for the new node */
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* assign value of n to new_node element */
	new_node->n = n;
	/* point new node to head */
	new_node->next = *head;
	/* point head to new node */
	*head = new_node;

	return (*head);
}

/**
 * print_listint - prints all elements of listint_t list
 * @h: head node
 *
 * Return: no_nodes (no. of nodes)
 */
size_t print_listint(const listint_t *h)
{
	/* stores no. of nodes */
	size_t no_nodes = 0;

	/* traverse through all the elements of list */
	while (h != NULL)
	{
		/* print element n */
		printf("%d\n", h->n);
		/* move to the next pointer */
		h = h->next;
		no_nodes++;
	}
	return (no_nodes);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);
	add_nodeint(&head2, 98);
	add_nodeint(&head2, 402);
	add_nodeint(&head2, 1024);
	print_listint_safe(head2);
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	node->next = add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint_safe(head);

	return (0);
}
