#include "main.h"

/**
 * malloc_checked - a func that allocates memory using malloc.
 * @b: this is the allocated memorym
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
