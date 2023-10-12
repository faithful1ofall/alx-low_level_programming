#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int result = 0;
	va_list l;

	va_start(l, n);

	while (i < n)
	{
		result += va_arg(l, int);
		i++;
	}
	va_end(l);
	return (result);
}
