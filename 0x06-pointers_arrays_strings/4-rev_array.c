#include "main.h"
#include <stdio.h>

/**
 * reverse_array - it reverses elements of an array
 * @n: function parameter
 * @a: function parameter
 * Return: 0
 */

void reverse_array(int *a, int n)

{
	int i;
	int k;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = k;
	}
}
