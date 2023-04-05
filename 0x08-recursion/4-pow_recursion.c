#include "main.h"

/**
 * _pow_recursion - a func. that returns the val of x raised to the power of y
 * @y: int to be used
 * @x: second int to be used
 * Return: output
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}

