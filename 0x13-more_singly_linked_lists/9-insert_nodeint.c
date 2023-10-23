#include "lists.h"

listint_t *create_node(int n);

/**
 * insert_nodeint_at_index - function inserts new node at given position.
 * @head: head node
 * @idx: index were to add new node
 * @n: new node
 * Return: address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *old_tmp;
	listint_t *n_node;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	n_node = create_node(n);
	if (n_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	if (idx == 0)
		*head = n_node;
	for (i = 0; i < idx - 1 && tmp != NULL && idx != 0; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		n_node->next = tmp;
	else
	{
		old_tmp = tmp->next;
		tmp->next = n_node;
		n_node->next = old_tmp;
	}
	return (n_node);
}
/**
 * create_node -  function to create new node
 * @n: data in the newely inserted node
 * Return: pointetr to newely created node
*/

listint_t *create_node(int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;

	return (n_node);
}
