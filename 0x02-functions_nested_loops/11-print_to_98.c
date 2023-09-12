#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	char buffer[16];
	int length;

	if (n <= 98)
	{
		while (n <= 98)
		{
			length = sprintf(buffer, "%d", n);
			write(1, buffer, length);
			if (n != 98)
				write(1, ", ", 2);
			else
				write(1, "\n", 1);
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			length = sprintf(buffer, "%d", n);
			write(1, buffer, length);
			if (n != 98)
				write(1, ", ", 2);
			else
				write(1, "\n", 1);
			n--;
		}
	}
}
