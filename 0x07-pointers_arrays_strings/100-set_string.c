#include "main.h"

/**
 * set_string - a func that set the val of a pointer to a char
 * @s: a pointer to be used
 * @to: string to change pointer
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
