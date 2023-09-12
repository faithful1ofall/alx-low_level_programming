#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count, i = 0;
	unsigned long fib[100];
	fib[0] = 1;
	fib[1] = 2;
	count = 2;

	while (count < 98)
	{
		fib[count] = fib[count - 1] + fib[count - 2];
		count++;
	}
	while (i < 98)
	{
		printf("%lu", fib[i]);
		if (i < 97)
			printf(", ");
		i++;
    }
    printf("\n");
    return (0);
}
