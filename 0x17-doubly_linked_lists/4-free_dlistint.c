#include "lists.h"

/**
 * free_dlistint - function to free DLL
 * @head: pointer to head node of DDl
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
