#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_opcodes - a func that prints the opcodes of this numbers
 * @a: ths is the address of the main func.
 * @n: this is the num of bytes to be printed
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its main func.
 * @argc: command line argument counter
 * @argv: command line argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int n;

	if (argv != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
