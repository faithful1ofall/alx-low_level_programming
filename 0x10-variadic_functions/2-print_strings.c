#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s;

	va_list l;

	va_start(l, n);

	while (i < n)
	{
		s = va_arg(l, char *);
		if (s == NULL)
			s = "(nil)";
		if (separator == NULL)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
		i++;
	}
	printf("\n");
	va_end(l);
}
