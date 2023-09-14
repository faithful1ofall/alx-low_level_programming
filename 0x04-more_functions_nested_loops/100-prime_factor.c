#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n = 612852475143, max = -1, i = 3;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	while (i <= sqrt(n))
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
		i += 2;
	}

	if (n > 2)
		max = n;

	printf("%lu\n", max);

	return (0);
}
