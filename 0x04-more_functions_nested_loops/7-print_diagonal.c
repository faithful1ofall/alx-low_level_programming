#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		i = 0;

		while (i < n)
		{
			j = 0;

			while (j < n)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
