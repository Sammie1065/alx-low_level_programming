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

	printf("please input two numbers: ");
	scanf("%d%d\n", &a, &b);

	mul = a * b;

	if (mul > 2)
	{
		printf("Error\n");
	}

	else
	{
		printf("%d\n", mul);
	}

	return (0);
}

