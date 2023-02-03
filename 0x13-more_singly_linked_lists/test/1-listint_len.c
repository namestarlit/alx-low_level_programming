#include "../lists.h"

/**
 * listint_len - computes number of elements in
 * a listint_t list
 * @h: head node
 *
 * Return: no_el (no. of elements)
 */
size_t listint_len(const listint_t *h)
{
	size_t no_el = 0;

	while (h != NULL)
	{
		h = h->next;
		no_el++;
	}
	return (no_el);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
