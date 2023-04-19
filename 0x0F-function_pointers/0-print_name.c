#include "function_pointers.h"

/**
 * print_name - a func. that prints a name
 * @name: this is the name given
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	printf("hello: %s\n", name);
}
/**
 * main - entry point
 * Return: nothing
 */

int main(void)
{
	f = &print_name;
	f("name");
}

