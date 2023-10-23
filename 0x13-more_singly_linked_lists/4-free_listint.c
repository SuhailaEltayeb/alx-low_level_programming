#include "lists.h"

/**
 * free_listint - function to free a listint_t list.
 * @head: pointer to head node
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
	head = head->next;
	free(tmp);
	}
}
