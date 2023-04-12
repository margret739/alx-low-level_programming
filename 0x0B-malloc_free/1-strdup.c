#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to the duplicated string
 * @str: character string
 * Return: a pointer
 */

char *_strdup(char *str)

{
	char *up;
	int k, r = 0;

	if (str == 0)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;

	up = (char *)malloc(k + 1 * (sizeof(char)));

	if (up == 0)
		return (NULL);

	for (r = 0; str[r]; r++)
		up[r] = str[r];

	return (up);
}
