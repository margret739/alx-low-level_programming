#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a list
 * @h: points to the _listint list to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t temp = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		temp++;
	}
	return (temp);
}
