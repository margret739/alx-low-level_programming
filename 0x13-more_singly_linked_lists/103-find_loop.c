#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in list
 * @head: a pointer to the address of head
 * Return: address of the node else NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)

{
	listint_t *first, *last;

	if (head == NULL || head->next == NULL)
		return (NULL);

	first = head->next;
	last = (head->next)->next;

	while (last)
	{
		if (first == last)
		{
			first = head;
			while (first != last)
			{
				first = first->next;
				last = last->next;
			}
			return (first);
		}
		first = first->next;
		last = (last->next)->next;
	}
	return (NULL);
}
