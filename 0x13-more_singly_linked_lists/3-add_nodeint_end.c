#include "lists.h"

/**
 * add_nodeint_end - function adds new node at end of listint_t list.
 * @head: pointer to head of first node
 * @n: new node
 * Return: address of new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *tmp;

	(void)tmp;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = n_node;
	}
	return (*head);
}
