#include "variadic_functions.h"

/**
 * print_numbers - a func that prints numbers, followed by a new line.
 * @n: nums of parameters
 * @separator:  the separator btw 2 nums.
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ap, int));
		if (a < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
