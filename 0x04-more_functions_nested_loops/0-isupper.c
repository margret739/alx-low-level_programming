#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: char to check
 * Return: 1 if the alphabet is uppercase and 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
