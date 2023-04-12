#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new sring or NULL if fails
 */

char *argstostr(int ac, char **av)

{
	int k, n;
	int l = 0;
	int i = 0;
	char *sto;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (n = 0; av[k][n]; n++)
			i++;
	}
	i += ac;
	sto = malloc(sizeof(char) * i + 1);
	if (sto == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (n = 0; av[k][n]; n++)
		{
			sto[l] = av[k][n];
			l++;
		}
		if (sto[l] == '\0')
		{
			sto[l++] = '\n';
		}
	}
	return (sto);
}
