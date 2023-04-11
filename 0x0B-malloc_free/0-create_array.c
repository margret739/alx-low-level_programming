#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size size and assigns character c
 * @c: character to assign
 * @size: size of array
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)

{
	char *mystr;

	unsigned int l;

	mystr = (char *)malloc(size * sizeof(char));
	if (size == 0 || mystr == NULL)
		return (NULL);

	for (l = 0; l < size; l++)
		mystr[l] = c;

	return (mystr);
}
