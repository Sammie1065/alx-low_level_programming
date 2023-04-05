#include "main.h"

/**
 * check - a func. to detect a prime num.
 * @a: fist int
 * @b: second int
 * Return: output
 */

int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return  (check(a + 1, b));
}

/**
 * is_prime_number - a func. to detact if a num if a prime num.
 * @n: int to be used
 * Return: output
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
