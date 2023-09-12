#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, and a new line
 */
void print_alphabet_x10(void)
{
	char cha;
	int d;

	d = 0;

	while (d < 10)
	{
		cha = 'a';
		while (cha <= 'z')
		{
			_putchar(cha);
			cha++;
		}
		_putchar('\n');
		d++;
	}
}
