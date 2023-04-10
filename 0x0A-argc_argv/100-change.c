#include "main.h"
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: total number of arguments
 * @argv: array of strings
 * _atoi: converts a string to integer
 * Return: Always 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])

{
	int n, k, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = _atoi(argv[1]);
	result = (0);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (k = 0; k < 5 && n >= 0; k++)
	{
		while (n >= coins[k])
		{
			result++;
			n -= coins[k];
		}
	}
	printf("%d\n", result);
	return (0);
}
