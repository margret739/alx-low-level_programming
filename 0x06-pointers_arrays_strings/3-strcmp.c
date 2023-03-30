#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare strings
 * @s1: strings
 * @s2: strings
 * Return: if str1 < str2, negative difference of first unmatched characters
 * If str1 == str2, 0,
 * If str1 > str2, the positive difference of the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
