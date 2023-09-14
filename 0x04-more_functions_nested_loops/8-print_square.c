#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */

void print_square(int size)
{
	int i = 0, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
