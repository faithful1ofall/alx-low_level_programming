#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar(n + '0');
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
}
