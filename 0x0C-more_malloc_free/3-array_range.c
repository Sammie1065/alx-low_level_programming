#include "main.h"
#include <stdlib.h>

/**
 * array_range - a func that creates an array of integers.
 * @min: this is the min. range of value stored
 * @max: this is the max. range of value stored
 * Return: a pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
