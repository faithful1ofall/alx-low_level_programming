#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int num, mul, prod;

	if (n >= 0 && n <= 15)
	{
		int num = 0;
		
		while (num <= n)
		{
			_putchar('0');
			int mul = 1;

			while (mul <= n)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				mul++;
				_putchar((prod % 10) + '0');
			}
			num++;
			_putchar('\n');
		}
	}
}
