#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete node at given index
 * @head: pointer to head node of DLL
 * @index: index where to insert new node to DLL
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *Temp = *head;

	if (*head == NULL)
		return (-1);
	while (index != 0)
	{
		if (Temp == NULL)
			return (-1);
		Temp = Temp->next;
		index--;
	}

	if (Temp == *head)
	{
		*head = Temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		Temp->prev->next = Temp->next;
		if (Temp->next != NULL)
			Temp->next->prev = Temp->prev;
	}
	free(Temp);
	return (1);
}
