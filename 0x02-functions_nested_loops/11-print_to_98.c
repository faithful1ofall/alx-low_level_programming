#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int increment = (n <= 98) ? 1 : -1;

	while (n != 98)
	{
		int abs_n = (n < 0) ? -n : n;
		int divisor = 1;

		while (divisor <= 1000)
		{
			int digit = (abs_n / divisor) % 10;

			if (digit != 0 || divisor == 1)
			{
				if (n < 0)
					_putchar('-');
				_putchar(digit + '0');
			}
			divisor *= 10;
		}
		_putchar(',');
		_putchar(' ');
		n += increment;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

