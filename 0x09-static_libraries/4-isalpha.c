#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: char to be checked
 * Return: 1 if char is letter lower or upper, else return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
