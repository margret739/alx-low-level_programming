#include <stdio.h>
#include "lists.h"

size_t looplist_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looplist_listint_len - counts number of nodes in list
 * @head: a pointer to the head
 * Return: if the list is not looped - 0 else
 * number of nodes
 */

size_t looplist_listint_len(const listint_t *head)

{
	size_t nd = 1;

	const listint_t *first, *last;

	if (head == NULL || head->next == NULL)
		return (0);

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
				nd++;
			}
			first = first->next;
			while (first != last)
			{
				nd++;
				first = first->next;
			}
			return (nd);
		}
		first = first->next;
		last = (last->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a list
 * @head: pointer to the head
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)

{
	size_t inds, nds = 0;

	inds = looplist_listint_len(head);

	if (inds == 0)
	{
		for (; head != NULL; inds++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (nds = 0; nds < inds; nds++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (inds);
}
