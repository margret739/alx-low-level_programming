#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates 2 strings using at most
 * an inputted number of bytes from src.
 * @dest: the destination string to be appended upon.
 * @src: the source string to be appended to dest.
 * @n: number of bytes to be appended to dest.
 * Return: a pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
