#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int f = 0, s = n - 1, tmp;

	while (f < s)
	{
		tmp = a[f];
		a[f] = a[s];
		a[s] = tmp;
		f++;
		s--;
	}
}
