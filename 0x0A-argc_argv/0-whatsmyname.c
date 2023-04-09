#include <stdio.h>

/**
 * main - a prog. that prints its name followed by a new line
 * @argc: a command line argument count
 * @argv: command line argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("program name is : %s\n", argv[0]);

	return (0);
}
