#include "lists.h"

int len(const char *str);
list_t *c_node(const char *str);
/**
 * add_node_end - function that adds a new node
 *  at the end of a list_t list.
 *  @head: head of the linked list
 *  @str: string to be added
 *  Return:address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *n_node;

	temp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		n_node = c_node(str);
	if (n_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = n_node;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = n_node;
	return (*head);
}
/**
 * c_node - function to create a new node
 * @str: string to be added to the node
 * Return: pointer to neweley created node
*/

list_t *c_node(const char *str)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	n_node->len = len(str);
	n_node->next = NULL;
	return (n_node);
}
/**
 * len - function to return length of string
 * @str: string to return its length
 * Return: lenght
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
