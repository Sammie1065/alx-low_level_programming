#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number.
 * @n: char to be checked
 * Return: 1 and prints + or return 0 and print 0 or return -1 and prints -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

