#include <stdio.h>

/**
 * print_string - a func that a string before the main func is executed
 */

void print_string(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char *output;

	output = print_string();

	return (0);
}
