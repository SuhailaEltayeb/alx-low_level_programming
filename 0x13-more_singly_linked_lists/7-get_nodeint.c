#include "lists.h"

/**
 * get_nodeint_at_index - function returns nth node of listint_t
 * @head: pointer to head
 * @index: index of node, starting zero
 * Return: nth node of linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s;

	for (s = 0; s < index; s++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
