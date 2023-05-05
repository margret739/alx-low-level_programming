#include "main.h"
#include <stdio.h>

/** 
 * print_binary - prints a binary 
 * @n: number to be printed 
 */

void print_binary(unsigned long int n)

{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 3) + '0');
}
