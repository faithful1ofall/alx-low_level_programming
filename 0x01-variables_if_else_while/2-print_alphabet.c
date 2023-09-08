#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		putchar(let);
		let++;
	}
	putchar('\n');
	return (0);
}
