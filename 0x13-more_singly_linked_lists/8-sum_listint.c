#include "lists.h"

/**
 * sum_listint - function that returns sum of all data
 * @head: a pointer to the node
 * Return: if the list is empty - 0
 */

int sum_listint(listint_t *head)

{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
