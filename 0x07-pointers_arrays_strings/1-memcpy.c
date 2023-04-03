#include "main.h"

/**
 * _memcpy - a func. that copies mem. area
 * @n: size to be copied
 * @src: memory area 1
 * @dest: memory area 2
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}

	return (dest);
}
