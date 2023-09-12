#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0 and going.
 * @n: The value of the times table to be printed currently.
 */
void print_times_table(int n)
{
	int num = 0, mul, pro;

	if (n >= 0 && n <= 15)
	{
		while (num <= n)
		{
			_putchar('0');
			mul = 1;

			while (mul <= n)
			{
				_putchar(',');
				_putchar(' ');

				pro = num * mul;

				if (pro <= 99)
					_putchar(' ');
				if (pro <= 9)
					_putchar(' ');

				if (pro >= 100)
				{
					_putchar((pro / 100) + '0');
					_putchar(((pro / 10)) % 10 + '0');
				}
				else if (pro <= 99 && pro >= 10)
				{
					_putchar((pro / 10) + '0');
				}
				mul++;
				_putchar((pro % 10) + '0');
			}
			num++;
			_putchar('\n');
		}
	}
}
