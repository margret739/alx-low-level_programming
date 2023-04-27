#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that adds a node at the beginning
 * @head: double pointer to the list_t list
 * @str: new string to the node
 * Return: address of new element else NULL
 */

list_t *add_node(list_t **head, const char *str)

{
	unsigned int len = 0;
	list_t *new;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	
	return (*head);
}
