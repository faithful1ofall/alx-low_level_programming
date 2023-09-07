#include <stdio.h>

/**
 * fmain - Entry point to access the printfs
 *
 * Return: 0 for success otherwise error
 */
int fmain(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

/**
 * main - Entry point
 *
 * Description: This function is the main entry point of the program.
 * It calls the fmain function and prints its output.
 *
 * Return: 0 on success else an error
 */
int main(void)
{
	fmain();
	return (0);
}
