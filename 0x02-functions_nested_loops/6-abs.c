#include "main.h"

/**
 * int_abs - a function that computes the absolute value of an integer
 * Return: always a
 */

int _abs(int a)

{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
