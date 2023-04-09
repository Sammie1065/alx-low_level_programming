#include <stdio.h>
#include <stdlib>

/**
 * main - a prog that multiplies two numbers
 * @argc: command line argument count
 * @argv: command line argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);

	return (0);
}

