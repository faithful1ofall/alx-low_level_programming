#include <stdio.h>

/**
 * main - Main Entry Point
 *
 * Return: 0 ensure it is a success
 */
int main(void)
{
	char let = 'z';

	while (let >= 'a')
	{
		putchar(let);
		let--;
	}
	putchar('\n');
	return (0);
}
