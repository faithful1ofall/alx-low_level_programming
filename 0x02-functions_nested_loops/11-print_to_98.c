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
		if (n < 98)
		{
			if (n >= 10 && n <= 99 || (n * -1) >= 10 && (n * -1) <=99)
			{
				if (n < 0)
				{
					_putchar('-');
				}
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}

			else if ((n * -1) >= 100 && (n * -1) <= 999)
			{
				_putchar('-');
				_putchar(((n * -1) / 100) + '0');
				_putchar((((n * -1) / 10) % 10) + '0');
				_putchar(((n * -1) % 10) + '0');
			}
			else if (n < 0 && (n * -1) < 9)
			{
				_putchar('-');
				_putchar((n * -1) + '0');
			}
			else
			{
				_putchar(n + '0');
			}
			_putchar(',');
			_putchar(' ');
			n++;
		}
		else
		{
			if (n >= 10 && n <= 99)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n >= 100 && n <= 999)
			{
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(n + '0');
			}
				_putchar(',');
				_putchar(' ');
				n--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
