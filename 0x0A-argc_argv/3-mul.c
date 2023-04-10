#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: strimg to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)

{
	int i, k, l, len, m, digit;

	i = 0;
	k = 0;
	l = 0;
	len = 0;
	m = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && m == 0)
	{
		if (s[i] == '-')
			++k;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (k % 2)
				digit = -digit;
			l = l * 10 + digit;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9'
)
				break;
			m = 0;
		}
		i++;
	}
	if (m == 0)
		return (0);
	return (l);
}

/**
 * main - multiplies two numbers
 * @argc: total number of arguments
 * @argv: array of strings
 * Return: Always 0 (success),1 (Error)
 */

int main(int argc, char *argv[])

{
	int n1, n2, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;
	printf("%d\n", result);

	return (0);
}
