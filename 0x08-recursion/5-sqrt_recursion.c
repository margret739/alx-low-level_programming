#include "main.h"
#include <stdio.h>

/**
 * isqrt- function that helps find natural square root of number
 * @n: number to be printed starting from 1
 * @sqt: square root to be found
 * Return: square root of the number
 */

int isqrt(int n, int sqt)
{
	if (n * n == sqt)
	{
		return (n);
	}
	if (n == sqt)
		return (-1);
	return (1 * isqrt(n + 1, sqt));
}

/**
 * _sqrt_recursion - function that returns the natural square root of number
 * @n: number to print its square root.
 * Return: square root of the number.
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	return (isqrt(1, n));
}
