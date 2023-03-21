#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10x in lower case
 *
 */

void print_alphabet_x10(void)
{
	int counter;
	char alp;

	for (counter = 0; counter <= 9; counter++)
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
	_putchar('\n');
}
