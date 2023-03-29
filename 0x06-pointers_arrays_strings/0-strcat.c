#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates 2 strings
 * @dest: the destination string
 * @src: the source file
 * Return: the destination string
 */

char *_strcat(char *dest, char *src)

{
	int destlen = 0;
	int srclen = 0;
	int k;

	for (k = 0; dest[k] != '\0'; k++)
		destlen++;
	for (k = 0; src[k] != '\0'; k++)
		srclen++;
	for (k = 0; k <= srclen; k++)
		dest[destlen + k] = src[k];
	return (dest);
}
