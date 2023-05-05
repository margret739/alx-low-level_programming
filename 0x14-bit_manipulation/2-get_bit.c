#include "main.h"

/**
 * get_uit - gets value of a bit in index
 * @n: index
 * @index: index to get value, starts at 0
 * Return: if error -1, else value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 1)
			return (-1);
			if ((n & (1 << index)) == 0)
			return (0);
			return (1);

