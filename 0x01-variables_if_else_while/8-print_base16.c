#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	char hexal = 'a';
	char hexan = '0';

	while (hexan <= '9')
	{
		putchar(hexan);
		hexan++;
	}
	while (hexal <= 'f')
	{
		putchar(hexal);
		hexal++;
	}
	putchar('\n');
	return (0);
}
