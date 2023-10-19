#include "lists.h"

int len(const char *str);
/**
 * add_node - function that adds a new node
 *  at the beginning of a list_t list.
 *  @head: head of the linked lise
 *  @str: string to be added
 *  Return: address to the new eement
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	if (head == NULL)
		return (NULL);
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	if (*head == NULL)

		n_node->next = NULL;
	else
		n_node->next = *head;
	n_node->str = strdup(str);
	n_node->len = len(str);
	*head = n_node;
	return (*head);
}
/**
 * len - function to return length of string
 * @str: input string
 * Return: length of string
*/
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
