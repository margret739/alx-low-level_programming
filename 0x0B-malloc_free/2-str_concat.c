#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
	char *str;
	int k = 0;
	int s = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	k = s = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[s] != '\0')
		s++;
	str = (char *)malloc(k + s + 1 * (sizeof(char)));

	if (str == NULL)
		return (NULL);
	k = s = 0;
	while (s1[k] != '\0')
	{
		str[k] = s1[k];
		k++;
	}
	while (s2[s] != '\0')
	{
		str[k] = s2[s];
		k++, s++;
	}
	str[k] = '\0';
	return (str);
}
