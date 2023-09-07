#include <unistd.h>

/**
 * fmain - Entry point for the write command
 *
 * Description: This function prints a message.
 *
 * Return: 1 on success. Error code otherwise
 */
int fmain(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

/**
 * main - Entry point
 *
 * Return:  1 means sucess else error
 */
int main(void)
{
	fmain();
	return (1);
}
