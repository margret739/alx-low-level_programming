#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function that copies memory are
 * @src: memory where is copied
 * @dest: memory where it is stored
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int i = 0;
	int k = n;

	for (; i < k; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
