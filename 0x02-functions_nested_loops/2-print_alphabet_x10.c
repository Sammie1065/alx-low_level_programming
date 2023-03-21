#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10x in lower case
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alp;

	while (count++ <= 9)

		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
	_putchar('\n');
}
