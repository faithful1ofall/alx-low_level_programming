#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int in = 1;
	unsigned int ho;

	if (index > 64)
		return (-1);
	ho = index;
	while (ho > 0)
		in *= 2, ho--;

	if ((*n >> index) & 1)
		*n -= in;

	return (1);
}
