#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to the duplicated string
 * @str: character string
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)

{
	char *up;
	int n, i = 0;

	if (str == NULL)
		return (NULL);
	n = 0;
	while (str[n] != '\0')
		n++;

	up = (char *)malloc(n + 1 * sizeof(char));
	if (up == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		up[n] = str[n];
	return (up);
}
