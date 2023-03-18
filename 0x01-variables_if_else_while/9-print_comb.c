#include <stdio.h>
/**
 * main - print combinations of single digit num
 *
 * Return: Always 0 (correct)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
