#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string
 * @s: string to be printed
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)

{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
