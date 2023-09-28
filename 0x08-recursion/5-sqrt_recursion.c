#include "main.h"

/**
 * _fincsqrt - a wrapper that does the recursion bit
 * @n : input number
 * @min: minimum number to sqr
 * @max: maximum number to sqr
 * Return: square root of @n or -1
*/

int _findsqrt(int n, int min, int max)
{
	int sqr, sqrd;

	sqr = (min + max) / 2;
	sqrd = sqr * sqr;

	if (sqrd == n)
		return (sqr);
	else if (min == max)
		return (-1);
	else if (sqrd < n)
		return (_findsqrt(n, sqr + 1, max));
	else
		return (_findsqrt(n, min, sqr - 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 * @n: input number
 * Return: square root
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (_findsqrt(n, 1, n));
}
