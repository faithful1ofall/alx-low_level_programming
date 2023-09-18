#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = 0, half, n;
	while (str[len] != '\0')
	{
		len++;
	}
	half = len / 2;
	n = len - 1;
	
	if (len % 2 != 0)
	{
		half = n / 2;
	}
	while (half <= n)
	{
		_putchar(str[half]);
		n++;
	}
	_putchar('\n');
}
