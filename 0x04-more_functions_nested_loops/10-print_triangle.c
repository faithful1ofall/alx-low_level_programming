#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i = 1, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			j = i;

			while (j < size)
			{
				_putchar(' ');
				j++;
			}
			j = 1;

			while (j <= i)
			{
				j++;
				_putchar('#');
			}
			i++;
			_putchar('\n');
		}
	}
}
