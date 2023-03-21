#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10x in lower case
 *
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	char alp;

	while (counter <= 10)

		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
	_putchar('\n');
}
