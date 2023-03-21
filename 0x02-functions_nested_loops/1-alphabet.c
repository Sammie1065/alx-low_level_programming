#include "main.h"
/**
 * print_alphabet - print alphabets in lower case
 *
 */

void print_alphabet(void);
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);
	_putchar('\n');
}
