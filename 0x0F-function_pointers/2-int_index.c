#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a func that searches for an integer.
 * @array: pointer to function
 * @size: num of elements in the array
 * @cmp: pointer to func to be used to compare values
 * Return: index of first element,if no element matches
 * return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (a < size)
			{
				if (cmp(array[a]))
					return (a);

				a++;
			}
		}
	}

	return (-1);
}
