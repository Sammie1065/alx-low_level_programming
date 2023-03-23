#include "main.h"

/**
 * print_line - to print a new line
 * @n: integer to he used
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
