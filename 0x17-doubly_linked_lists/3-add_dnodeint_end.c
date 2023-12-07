#include "lists.h"

/**
 * add_dnodeint_end - function to add new node at end of DLL
 * @head: head node of DLL
 * @n: new node to be added to DLL
 *
 * Return: address of new node, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nnode = malloc(sizeof(dlistint_t));
	dlistint_t *node;

	if (!head || !nnode)
	{
		if (nnode)
			free(nnode);
		return (NULL);
	}
	nnode->n = n;
	nnode->prev = NULL;

	if (!*head)
	{
		*head = nnode;
		nnode->next = NULL;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;

		node->next = nnode;
		nnode->prev = node;
	}
	return (nnode);
}
