#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int sum3, sum5, sum;
    int i;
    char buffer[20]; // Buffer to hold the result as a string
    int length = 0; // Initialize the length to 0

    sum3 = 0;
    sum5 = 0;
    sum = 0;

    for (i = 0; i < 1024; ++i)
    {
        if ((i % 3) == 0)
        {
            sum3 = sum3 + i;
        }
        else if ((i % 5) == 0)
        {
            sum5 = sum5 + i;
        }
    }

    sum = sum3 + sum5;

    // Convert the result to a string in reverse order
    while (sum > 0)
    {
        buffer[length++] = '0' + (sum % 10); // Convert the last digit to a character
        sum /= 10; // Remove the last digit
    }

    // Print the reversed string to stdout using putchar
    while (length > 0)
    {
        putchar(buffer[length - 1]); // Print a single character
        length--;
    }

    putchar('\n'); // Print a newline character

    return (0);
}

