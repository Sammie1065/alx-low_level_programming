#include <stdio.h>

/**
 * main - a prog. that prints numbers of arguments
 * @argc: command line argument counter
 * @argv: command line argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
