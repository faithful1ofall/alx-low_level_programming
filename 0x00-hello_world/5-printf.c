#include <stdio.h>

/**
 * fmain - Entry point for the printf command
 *
 * Description: This function prints a message.
 *
 * Return: 0 on success. Error code otherwise
 */
int fmain(void)
{
	printf("%s\n", "with proper grammar, but the outcome is a piece of art,");
	return (0);
}

/**
 * main - main Entry point
 *
 * Description: This function is the main entry point of the program.
 * It calls the fmain function and prints its output.
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	fmain();
	return (0);
}

