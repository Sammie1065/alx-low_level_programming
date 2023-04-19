#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a func thats executes a function given
 * as a parameter on each element of an array.
 * @array: array to executes function on
 * @size: this is the size of the array
 * @action: pointer to func. needed to be used
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
	{
		a = 0;
		while (i < size)
		{
			action(array[a]);
			a++;
		}
	}
}
