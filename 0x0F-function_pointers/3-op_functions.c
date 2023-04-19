#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add two ints
 * @a: int to be used
 * @b: second int to be used
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two ints
 * @a: first int to be used
 * @b: second int to be used
 * Return: sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul two ints
 * @a: first int to be used
 * @b: second int to be used
 * Return: mul
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a:: first int
 * @b: second int
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - look for the remainder of two ints
 * @a: first int
 * @b: second int
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);

	}

	return (a % b);
}
