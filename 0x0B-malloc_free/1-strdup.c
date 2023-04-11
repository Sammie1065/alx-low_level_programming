#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a func that returns a pointer to a newly
 * allocated space to a memory,which contain the copy
 * of the string given as a parameter
 * @str: the source string
 * Return: a pointer to the duplicate string,NULL if
 * insufficient mem was available
 */

char *_strdup(char *str)
{
	char *cpy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	cpy = (char *)malloc((sizeof(char) * len) + 1);
	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cpy[i] = str[i];
	cpy[len] = '\0';

	return (cpy);
}

