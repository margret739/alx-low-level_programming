#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - a function that determines a prime number
 * @n: number to be checked if it is a prime number
 * Return: 1 if input is prime number else 0.
 */

int is_prime_number(int n)

{
	int is_prime = 0;
	
	if (n < 2)
		is_prime = 0;
	else if (n == 2)
		is_prime = 1;
	else if (n % 2 == 1)
		is_prime = 1;
	return (is_prime);
}
