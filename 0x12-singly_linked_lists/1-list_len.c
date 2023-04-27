#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns number of elements
 * @h: pointer to the list_t list to print
 * Return: number of elements h
 */

size_t list_len(const list_t *h)

{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
