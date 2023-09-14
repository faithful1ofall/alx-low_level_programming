#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int n10 = 0, n14;

	while (n10 < 10)
	{
		n14 = 0;

		while (n14 <= 14)
		{
			if (n14 >= 10)
			{
				_putchar((n14 / 10) + '0');
			}
			_putchar((n14 % 10) + '0');
			n14++;
		}
		n10++;
		_putchar('\n');
	}
}
