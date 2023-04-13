#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates n bytes of a string
 * @s1: string to append
 * @s2: string to concatenate
 * @n: number of bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int i, k;
	unsigned int len1 = 0, len2 = 0;
	char *p;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		p = malloc(sizeof(char) * (len1 + n + 1));
	else
		p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!p)
		return (NULL);

	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		p[i++] = s2[k++];

	while (n >= len2 && i < (len1 + len2))
		p[i++] = s2[k++];

	p[i] = '\0';

	return (p);
}
