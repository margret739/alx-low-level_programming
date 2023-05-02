#include <stdio.h>
#include "lists.h"

size_t looplist_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looplist_listint_count - counts number of nodes
 * @head: a pointer to the node
 * Return: if the list is not looped - 0, else
 * number of nodes in the list
 */

size_t looplist_listint_count(listint_t *head)

{
	size_t nds = 1;
	listint_t *first, *last;

	if (head == NULL || head->next == NULL)
		return (0);

	first = head->next;
	last = (head->next)->next;

	while (last)
	{
		if (first == last)
		{
			first = last;
			while (first != last)
			{
				first = first->next;
				last = last->next;
				nds++;
			}

			first = first->next;
			while (first != last)
			{
				nds++;
				first = first->next;
			}
			return (nds);
		}

		first = first->next;
		last = (last->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a list
 * @h: a pointer to the address of the head
 * Return: size of the list that was freed
 */
/* the function sets the head to NULL*/

size_t free_listint_safe(listint_t **h)

{
	size_t ind, nds;
	listint_t *temp;

	ind = looplist_listint_count(*h);

	if (ind == 0)
	{
		for (; h != NULL && *h != NULL; ind++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (nds = 0; nds < ind; nds++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;

	return (ind);
}
