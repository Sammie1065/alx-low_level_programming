#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print alphabets in lower case
 *
 * Return: Always 0 (correct)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 100 && i != 133)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

