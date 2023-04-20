#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list strings;
	char *str;
	unsigned int num;

	va_start(strings, n);

	for (num = 0; num < n; num++)
	{
		str = va_arg(strings, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
