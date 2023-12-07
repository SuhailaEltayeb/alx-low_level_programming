#include "lists.h"

/**
 * print_dlistint - function to print all items in doubly linked list
 * @h: head node of DLL
 * Return: doubly linked list no. of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
