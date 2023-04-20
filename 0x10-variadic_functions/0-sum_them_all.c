#include "variadic_functions.h"

/**
 * sum_them_all - a func returns the sum of all its parameters.
 * @n: num of parameters passed
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int a;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
