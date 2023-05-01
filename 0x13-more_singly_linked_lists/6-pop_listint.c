#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * @head: pointer to the address of the head
 * Return: if linked list is empty - 0, else
 * the head nodes data(n)
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int d;

	if (*head == NULL)
		return (0);

	temp = *head;
	d = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (d);
}
