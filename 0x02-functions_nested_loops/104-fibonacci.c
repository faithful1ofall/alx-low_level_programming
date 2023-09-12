#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i = 2;
    unsigned long fib1 = 1;
    unsigned long fib2 = 2;

    printf("%lu, %lu", fib1, fib2);

    while (i < 98)
    {
        unsigned long fib_next = fib1 + fib2;

        printf(", %lu", fib_next);

        fib1 = fib2;
        fib2 = fib_next;
        i++;
    }

    printf("\n");
    return (0);
}
