#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert new node at given position
 * @h: pointr to head node of DLL
 * @idx: index in DLL whre new node to be added
 * @n: new node to be added to DLL
 *
 * Return: addredd of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *Temp = *h;
	dlistint_t *nnode;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 1)
	{
		Temp = Temp->next;
		if (Temp == NULL)
			return (NULL);
		idx--;
	}
	if (Temp->next == NULL)
		return (add_dnodeint_end(h, n));

	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->prev = Temp;
	nnode->next = Temp->next;
	Temp->next->prev = nnode;
	Temp->next = nnode;

	return (nnode);
}
