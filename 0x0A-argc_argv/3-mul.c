#include <stdio.h>

/**
 * main - a prog that multiplies two numbers
 *
 * Return: 0
 */

int main(void)
{
	int a, b;
	int mul;

	mul = a * b;

	if (mul > 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%d\n", mul);
	}

	return (0);
}

