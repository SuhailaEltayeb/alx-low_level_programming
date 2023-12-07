#include "lists.h"

/**
 * dlistint_len - function to return # of elements in DLL
 * @h: ponter to DLL head point
 * Return: # of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
