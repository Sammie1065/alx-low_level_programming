#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a func. that prints a name
 * @name: this is the name given
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
