#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len = 0, s = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	while (s < len)
	{
		_putchar(str[s]);
		s += 2;
	}
	_putchar('\n');
}
