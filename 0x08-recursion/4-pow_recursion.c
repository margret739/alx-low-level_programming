#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y.
 * @x: the value to be printed
 * @y: the value to be printed
 * Return: The value
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
