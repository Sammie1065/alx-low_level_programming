#include <stdio.h>
#include <stdlib.h>

/**
 * main - a prog that adds two numbers
 * @argc: command line argument counts
 * @argv: command line argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		priintf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
