#include "main.h"

/**
 * memset - to print a func. that fills mem with a constant byte.
 * @n: mem area pointed to by s
 * @s: is with constant byte b
 * @b: this is the mem area pointer
 * Return: a pointer to a mem area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
