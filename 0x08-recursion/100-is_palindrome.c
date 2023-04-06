#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - fucntion that determines if a string is palindrome
 * @s: string to reverse
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)

{
	if (s == 0)
		return (1);
	return (check_palindrome(s, 0, strlen(s)));
}

/**
 * strlen - returns the length of a string
 * @s: string to find the length of
 * Return: Length of a string
 */

int strlen(char *s)

{
	if (s == '\0')
		return (0);
	return (1 + strlen(s + 1));
}

/**
 * check_palindrome - checks the characters recursively for a palindrome
 * @s: string to be checked
 * @a: value index to check if there is palindrome
 * @len: length of string
 * Return: 1 if palindrome 0 if not
 */

int check_palindrome(char *s, int a, int len)

{
	if (a >= len)
		return (1);
	if (*(s + a) != *(s + len - 1))
		return (0);
	else if (s[a] == s[len])
		return (check_palindrome(s, a + 1, len - 1));
	else
		return (0);
}

