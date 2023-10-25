#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: head node
 * Return: address to node where loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr2;
	listint_t *pre;

	ptr2 = head;
	pre = head;
	while (head && ptr2 && ptr2->next)
	{
		head = head->next;
		ptr2 = ptr2->next->next;

		if (head == ptr2)
		{
			head = pre;
			pre = ptr2;
			while (1)
			{
				ptr2 = pre;
				while (ptr2->next != head && ptr2->next != pre)
				{
					ptr2 = ptr2->next;
				}
				if (ptr2->next == head)
					break;
				head = head->next;
			}
			return (ptr2->next);
		}
	}
	return (NULL);
}
