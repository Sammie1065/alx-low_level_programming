#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a func  that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int g;
	char *c;

	g = 1;
	c = (char *)&g;

	return (*c);
}
