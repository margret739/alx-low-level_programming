#include "main.h"

/**
 * flip_bits - returns number of bits you'll need to flip
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int l, count = 0;
	unsigned long int fast;
	unsigned long int slow = n ^ m;

	for (l = 63; l >=0; l--)
	{
		fast = slow >> l;
		if (fast & 1)
			count++;
	}

	return (count);
}
