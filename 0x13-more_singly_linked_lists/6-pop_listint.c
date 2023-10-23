#include "lists.h"

/**
 * pop_listint - function delete head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to head node
 * Return: data of head node n
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
