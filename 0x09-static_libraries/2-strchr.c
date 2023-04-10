#include "main.h"
#include <stddef.h>

/**
 * *_strchr - a func. that locates a char. in a string
 * @c: occurence of the char.
 * @s: in the string
 * Return: a pointer to the first occurence of a char else NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
