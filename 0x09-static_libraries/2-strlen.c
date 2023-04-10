#include "main.h"
#include <string.h>

/**
 * _strlen - function that return the length of a string
 * @s: string to be calc.
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
