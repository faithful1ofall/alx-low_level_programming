#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argv: array of arguments
 * @argc: number of arguments not used
 * Return: 0 means the program is a Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
