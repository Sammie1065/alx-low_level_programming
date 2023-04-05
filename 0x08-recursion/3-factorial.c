#include "main.h"

/**
 * factorial - a func. that give the factorial of a given num.
 * @n: any given num
 * Return: int
 */

int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
