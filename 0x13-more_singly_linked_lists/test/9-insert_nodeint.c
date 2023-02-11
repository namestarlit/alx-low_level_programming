#include "../lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given
 * index in a listint_t linked list
 * @head: double pointer to head node
 * @idx: index of the node
 * @n: value to store in the node
 *
 * Return: new node address,
 * NULL (idx does not exists or failed to allocate memory
 * for the new node).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	size_t i;

	/* allocate memory for the new node */
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* assign the value of n */
	new_node->n = n;

	/* if idx does not exist */
	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}

	if (idx != 0)
	{
		/* traverse the linked list to index */
		for (i = 0; i < idx; i++)
		{
			/* change current node to next node */
			tmp = tmp->next;
		}
	}

	/* insert at the beginning if idx == 0) */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		/* assign new node to point to the tmp->next node */
		new_node->next = tmp->next;
		/* assign tmp->next to point to new node */
		tmp->next = new_node;
	}
	return (new_node);
}

/**
 * add_nodeint_end - adds node at the end of
 * listint_t list
 * @head: head node
 * @n: integer(int)
 *
 * Return: head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	/* allocate memory for new node */
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* assign value to new node element n */
	new_node->n = n;
	/* assign new node pointer to point to NULL */
	new_node->next = NULL;
	tmp = *head;

	/* assign new_node to head if it's the first node */
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		/* traverse list until you get to the last node */
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		/* assign pointer in tail node to point to new node */
		tmp->next = new_node;
	}
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
 * free_listint2 - frees a listint_t list
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *c_node, *n_node;

	/* assign head to current node */
	c_node = *head;

	while (c_node != NULL)
	{
		/* assign pointer to next node to next node */
		n_node = c_node->next;
		free(c_node);

		/* assign next node to current node */
		c_node = n_node;
	}
	/* set head to NULL */
	*head = NULL;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
