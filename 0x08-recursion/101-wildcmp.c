#include "main.h"

/**
 * str_check - a func. that ascertain if two strings are same
 * @s1: base address of string_1
 * @s2: base address of string_2
 * @i: left index
 * @j: a special index
 * Return: 1 if s is a palindrome or 0 if fasle
 */

int str_check(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_check(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_check(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_check(s1, s2, i + 1, j) || str_check(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - a func. that checks if two string is same
 * @s1: base address for string
 * @s2: base address for string
 * Return: 1 if strings are same
 */

int wildcmp(char *s1, char *s2)
{
	return (str_check(s1, s2, 0, 0));
}
