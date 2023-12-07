#include "lists.h"

/**
 * sum_dlistint - function to return summation of data in DLL
 * @head: pointer to head node of DLL.
 *
 * Return: toatla of data within DLL
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
