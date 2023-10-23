#include "lists.h"

/**
 * add_nodeint - function adds new node at beginning of listint_t list.
 * @head: head
 * @n: new node
 * Return: address to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	if (head == NULL)
		return (NULL);
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	if (*head == NULL)
		n_node->next = NULL;
	else
		n_node->next = *head;
	n_node->n = n;
	*head = n_node;

	return (*head);
}

