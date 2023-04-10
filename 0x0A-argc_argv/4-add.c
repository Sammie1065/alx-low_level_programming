#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a prog that adds two numbers
 * @argc: command line argument counts
 * @argv: command line argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	int i, k;
	int add = 0;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (!isdigit(argv[i][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[i]);
	}

	printf("%d\n", add);
	return (0)
}
