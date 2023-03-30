#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes lowercase letters to uppercase
 * @str: string
 * '':parameters to be checked
 * Return: string
 */

char *string_toupper(char *)

{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
