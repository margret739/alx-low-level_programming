#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: contains total number of arguments
 * @argv: an array of strings
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", argv[0]);
	return (0);
}
