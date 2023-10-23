#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t
 * @head: head node of linked list
 * Return: address of the node where the loop starts
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp_2;

	if (head == NULL || *head == NULL)
		return (NULL);
	tmp = *head;
	*head = tmp->next;
	tmp->next = NULL;

	while (*head != NULL)
	{
		tmp_2 = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		if (tmp_2 == NULL)
			return (*head);
		*head = tmp_2;
	}
	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	return (NULL);
}

