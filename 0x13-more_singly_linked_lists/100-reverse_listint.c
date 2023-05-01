#include "lists.h"

/**
 * reverse_listint - a function that reverses a list
 * @head: a pointer to the node
 * Return: a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *first;
	listint_t *tail;

	if (*head == NULL || head == NULL)
		return (NULL);

	tail = NULL;

	while ((*head)->next != NULL)
	{
		first = (*head)->next;
		(*head)->next = tail;
		tail = *head;
		*head = first;
	}

	(*head)->next = tail;

	return (*head);
}
