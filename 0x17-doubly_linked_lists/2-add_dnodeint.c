#include "lists.h"

/**
 * add_dnodeint - function to add new node at the beginning of DLL
 * @head: pointer to head node of DLL
 * @n: new node to be added
 *
 * Return: address of new added node, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode = malloc(sizeof(dlistint_t));

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
		nnode->next = *head;
		(*head)->prev = nnode;
		*head = nnode;
	}
	return (nnode);
}
