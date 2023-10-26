#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int di = n ^ m;
	int count = 0;

	while (di)
	{
		count++;
		di &= (di - 1);
	}

	return (count);
}
