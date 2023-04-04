#include "main.h"

/**
 * *_strpbrk - a func. that searches a string for any set of bytes
 * @s: first occurence
 * @accept: a string that matches any of the bytes
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*S == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
