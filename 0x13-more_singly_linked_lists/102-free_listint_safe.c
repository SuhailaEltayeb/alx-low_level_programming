#include "lists.h"

void free_listptr2(listptr_t **head);
/**
 * free_listint_safe - function that frees a listint_t list
 * @h: head node
 * Return: size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	size_t num_nodes = 0;
	listptr_t *hptr, *add, *new;
	listint_t *c;

	hptr = NULL;

	while (*h != NULL)
	{
		new = malloc(sizeof(listptr_t));
		if  (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;
		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listptr2(&hptr);
				return (num_nodes);
			}
		}
		c = *h;
		*h = (*h)->next;
		free(c);
		num_nodes++;
	}
	*h = NULL;
	free_listptr2(&hptr);
	return (num_nodes);
}
/**
 * free_listptr2 - function to free LS
 * @head: head node of LS
 * Return: void
 */
void free_listptr2(listptr_t **head)
{
	listptr_t *tmp;
	listptr_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((tmp = c) != NULL)
		{
			c = c->next;
			free(tmp);
		}
		*head = NULL;
	}
}
