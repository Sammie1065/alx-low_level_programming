#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a func returns the number of bits you
 *  would need to flip to get from one number to another
 *  @n: this is the first num
 *  @m: this is the second num
 *  Return: the num of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res;
	unsigned int j, i;

	j = 0;
	res = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (res == (diff & res))
			j++;
		res <<= 1;
	}

	return (j);
}
