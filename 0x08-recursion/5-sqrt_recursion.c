#include "main.h"

/**
 * check - check for the square root of a num.
 * @a: int to be used
 * @b: second int to be used
 * Return: an int
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));

}

/**
 * _sqrt_recursion - return the nat. squareroot of a num.
 * @n: int to be used
 * Return: square root or -1  if false
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
