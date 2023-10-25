#include "lists.h"

void free_listptr(listptr_t **head);
/**
 * print_listint_safe - function that prints a listint_t LS
 * @head: head node
 * Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	listptr_t *hptr, *add, *new;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listptr_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;
		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listptr(&hptr);
				return (num_nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_nodes++;
	}
	free_listptr(&hptr);
	return (num_nodes);
}
/**
 * free_listptr - function to free LS
 * @head: head node of LS
 * Return: void
*/
void free_listptr(listptr_t **head)
{
	listptr_t *temp;
	listptr_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((temp = c) != NULL)
		{
			c = c->next;
			free(temp);
		}
		*head = NULL;
	}
}
