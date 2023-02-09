#include "../lists.h"

/**
 * pop_listint - prints and then deletes contents of
 * head node.
 * @head: pointer to head node
 *
 * Return: 0 (linked list is empty), n (head nodes data)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int no_data; /* number of head node data */

	/* check if linked list is empty */
	if (*head == NULL)
		return (0);

	/* assign n head->n to number of data */
	no_data = tmp->n;
	/* assign head to be the next node */
	*head = tmp->next;
	free(tmp);

	return (no_data);
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
    int n;

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
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}
