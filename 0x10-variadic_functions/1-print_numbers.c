#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: numbers of integers
 * @...: variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list num;
	unsigned int sums;

	va_start(num, n);

	for (sums = 0; sums < n; sums++)
	{
		printf("%d", va_arg(num, int));

		if (sums != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
