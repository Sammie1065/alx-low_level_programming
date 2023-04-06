#include "main.h"

/**
 * _strlen_recursion - a func. that prints the lenght of a string
 * @s: string to be printed
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker - a func. that checks if s is a palindrome
 * @s: this is the string base address
 * @i: left index
 * @j: rigth index
 * Return: 1 if s is a palindrome or 0 if false
 */

int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - a func. that checks if s is a palindrome
 * @s: this is the base address for the string
 * Return: 1 if n is a prime or 0 if false
 */

int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
