#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head : pointer to the node
 * @index: index of the node that should be deleted starts at 0
 * Return: 1 if success else -1 
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	unsigned int nd;
	listint_t *temp;
	listint_t *ind = *head;

	if (ind == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ind);
		return (1);
	}
	for (nd = 0; nd < (index - 1); nd++)
	{
		if (ind->next == NULL)
			return (-1);
		
		ind = ind->next;
	}

	temp = ind->next;
	ind->next = temp->next;
	free(temp);

	return (1);
}
