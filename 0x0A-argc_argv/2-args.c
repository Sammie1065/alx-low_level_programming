#include <stdio.h>

/**
 * main - a prog. that prints all arguments recieved
 * @argc: command line argument counter
 * @argv: command line argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
