#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of linked list
 * @h: points to the list_t list to print
 *
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)

{
	size_t t = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		t++;
	}

	return (t);
}
