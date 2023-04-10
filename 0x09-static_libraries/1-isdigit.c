#include "main.h"

/**
 * _isdigit - func. that checks for digit 0 to 9
 * @c: char to be checked
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);
	else
		return (0);
}
