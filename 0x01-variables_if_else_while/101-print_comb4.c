#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	int nu = 0, nu1 = 1, nu2 = 2;

	while (nu <= 8)
	{
		nu1 = nu + 1;
		while (nu1 <= 9)
		{
			nu2 = nu1 + 1;
			while (nu2 <= 9)
			{
				putchar(nu + '0');
				putchar(nu1 + '0');
				putchar(nu2 + '0');
				if (nu != 7 || nu1 != 8 || nu2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				nu2++;
			}
			nu1++;
		}
		nu++;
	}
	putchar('\n');
	return (0);
}
