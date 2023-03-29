#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies string
 * @dest: destination string
 * @src: source string
 * @n: number of strings
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)

{
	int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
}
