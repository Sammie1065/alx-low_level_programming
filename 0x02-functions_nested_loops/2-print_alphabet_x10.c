#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10x in lower case
 *
 */

void print_alphabet_x10(void)
{
	int counter;
	char alp;

	for (counter = 1; counter <= 10; counter++)
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
	_putchar('\n');
}
