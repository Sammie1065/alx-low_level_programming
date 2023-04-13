#include "main.h"

/**
 * _calloc - a func that allocates memory for an array, using malloc
 * @size: allocate elements of size bytes
 * @nmemb: allocate mem. for array
 * Return: pointer to the allocated mem.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
