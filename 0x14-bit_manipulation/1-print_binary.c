#include <stdio.h>
#include "main.h"

/**
 * _power - calc (base and power)
 * @base: this is the base of the exponent
 * @pow: this is the power of the exponent
 * Return: the value of base and power
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned long int d;

	num = 1;
	for (d = 1; d <= pow; d++)
		num *= base;
	return (num);
}

/**
 * print_binary - a func that prints the binary representation of a number.
 * @n: the num
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int dev, output;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		output = n & dev;
		if (output == dev)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
