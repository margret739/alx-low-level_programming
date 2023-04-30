#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - function that adds a note at the beginning
 * @head: double pointer to the listint_t list
 * @n: new int to the node
 * Return: address of new element, else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
