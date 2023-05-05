#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: contains binary number
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)

{
	int j;
	unsigned int val = 0;


	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
		       return (0);
		val = 2 * val + (b[j] - '0');
	}
	return (val);
}
