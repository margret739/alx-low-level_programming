#include "lists.h"
#include <stdio.h>

/**
 * listint_len - functions that returns number of elements
 * @h: pointer to the listint_list to print
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)

{
	size_t l = 0;

	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
