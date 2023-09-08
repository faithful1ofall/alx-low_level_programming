#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	int nu = 0, nu1 = 1;

	while (nu <= 8)
	{
		nu1 = nu + 1;
		while (nu1 <= 9)
		{
			putchar(nu + '0');
			putchar(nu1 + '0');
			if (nu != 8 || nu1 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			nu1++;
		}
		nu++;
	}
	putchar('\n');
	return (0);
}
