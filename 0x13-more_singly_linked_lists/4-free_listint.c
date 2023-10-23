#include "lists.h"

/**
 * free_listint - function to free a listint_t list.
 * @head: pointer to head node
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
	head = head->next;
	free(tmp);
	}
}
