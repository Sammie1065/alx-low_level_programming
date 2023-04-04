#include "main.h"

/**
 * *_strpbrk - a func. that searches a string for any set of bytes
 * @s: first occurence
 * @accept: a string that matches any of the bytes
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*S == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
