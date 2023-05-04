#include <stdio.h>
#include "main.h"

/**
 * get_bit - a func that returns the value of a bit at a given index
 * @n: this checks the bits
 * @index: which to check bit
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int sam, dan;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	sam = 1 << index;
	dan = n & sam;
	if (dan == sam)
		return (1);

	return (0);
}

