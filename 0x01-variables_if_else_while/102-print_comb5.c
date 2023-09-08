#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	int nu = 0, nu1 = 1;

	while (nu <= 99)
	{
		nu1 = nu + 1;
		while (nu1 <= 99)
		{
			putchar(nu / 10 + '0');
			putchar(nu % 10 + '0');
			putchar(' ');
			putchar(nu1 / 10 + '0');
			putchar(nu1 % 10 + '0');
			if (nu != 98 || nu1 != 99)
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
