#include "lists.h"

/**
 * get_dnodeint_at_index - function to return index of specific node in DLL
 * @head: pointer to head node of DLL
 * @index: index of specific node
 *
 * Return: adress of node in the specified index of DLL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t x = 0;

	while (head)
	{
		if (x == index)
			return (head);
		head = head->next;
		x++;
	}
	return (NULL);
}
