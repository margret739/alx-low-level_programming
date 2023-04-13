#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to new array
 */

int *array_range(int min, int max)

{
	int *pt;
	int i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;

	pt = malloc(j * (sizeof(int)));
	if (pt == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		pt[i] = min++;
	return (pt);
}
