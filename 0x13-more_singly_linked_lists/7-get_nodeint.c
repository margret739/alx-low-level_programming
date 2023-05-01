#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of list
 * @head: a pointer to the node
 * @index: index of the node start at 0
 * Return: if node does not exist - NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int nd;
	
	for (nd = 0; nd < index; nd++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
