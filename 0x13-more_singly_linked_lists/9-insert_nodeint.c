#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 * a given position
 * @head: a pointer to the address of head
 * @idx: the index of the list start at 0
 * @n: integer to the new node
 * Return: the address of the new node else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	unsigned int nd;
	listint_t *new, *ins = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = ins;
		*head = new;
		return (new);
	}

	for (nd = 0; nd < (idx - 1); nd++)
	{
		if (ins == NULL || ins->next == NULL)
			return (NULL);

		ins = ins->next;
	}

	new->next = ins->next;
	ins->next = new;

	return (new);
}
