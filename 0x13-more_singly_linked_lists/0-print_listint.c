#include "lists.h"

/**
 * print_listint - function that prints elements of listint_t list.
 * @h: head node
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t c;

	if (h == NULL)
		return (0);
	for (c = 0; h != NULL; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}

