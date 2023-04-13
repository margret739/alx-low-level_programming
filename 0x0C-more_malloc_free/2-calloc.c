#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array for @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory
 * @nmemb: number of elements in the array
 * @size: allocate element of size bytes
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *s;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (c = 0; c < (nmemb * size); c++)
		s[c] = 0;
	return (s);
}
