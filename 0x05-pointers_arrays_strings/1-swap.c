#include "main.h"

/**
 * swap_int - a program to swap two integers
 * @a: int to be used
 * @b: int to be used
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
