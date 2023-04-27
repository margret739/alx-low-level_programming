#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: double pointer to the list_t list
 * @str: dtring to put in new node
 * Return: address of the new element, else NULL
 */

list_t *add_node_end(list_t **head, const char *str)

{
	unsigned int len = 0;
	list_t *new;
	list_t *add;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	while (add->next)
	{
		add = add->next;
	}
	add->next = new;

	return (new);
}
