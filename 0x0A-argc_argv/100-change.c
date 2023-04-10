#include <stdio.h>
#include <stdlib.h>

/**
 * main - a prog that prints the min num of a coin
 * to make change for an amount of money
 * @argc: command line argument count
 * @argv: command line argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (sum > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (sum >= cents[i])
				{
					count += sum / cents[i];
					sum = sum % cents[i];
				}
			}
		}
		if (sum == 1)
			sum++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
