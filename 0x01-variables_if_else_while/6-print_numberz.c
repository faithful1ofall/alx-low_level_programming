#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	int nu = 0;

	while (nu <= 9)
	{
		putchar(nu + '0');
		nu++;
	}
	putchar('\n');
	return (0);
}
