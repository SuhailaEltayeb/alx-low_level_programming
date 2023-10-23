#include "lists.h"

/**
 * delete_nodeint_at_index - unction deletes node at index of listint_t
 * @head: pointer to head
 * @index: index to node to be deleted
 * Return: if successul, 1, otherwisw -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *n;

	tmp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && tmp != NULL && index != 0; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		n = tmp->next;
		free(tmp);
		*head = n;
	}
	else
	{
		if (tmp->next == NULL)
			n = tmp->next;
		else
			n = tmp->next->next;
		free(tmp->next);
		tmp->next = n;
	}
	return (1);
}
