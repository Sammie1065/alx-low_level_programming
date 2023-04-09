#include <stdio.h>
#include <stdlib>

/**
 * main - a prog that multiplies two numbers
 * @argc: command line argument count
 * @argv: command line argument vector
 * Return: 0 if succesful, 1 if there's an error
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	mul = a * b;

	printf("%d\n", mul);

	return (0);
}

