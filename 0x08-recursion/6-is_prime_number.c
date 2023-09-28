#include "main.h"

/**
 * _primecheck - calculates if a number is prime recursively
 * @num: number to evaluate
 * @div: iterator
 *
 * Return: 1 if num is prime, 0 if not
 */

int _primecheck(int num, int div)
{
	if (div == num)
		return (1);
	else if (num % div == 0/* && div > 0*/)
		return (0);
	else
		return (_primecheck(num, div + 1));
}

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_primecheck(n, 2));
}
