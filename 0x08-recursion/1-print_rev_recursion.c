#include "main.h"

/**
 * _print_rev_recursion - a func. that print a string in revearse
 * @s: string to be used
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
