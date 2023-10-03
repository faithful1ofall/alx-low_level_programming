#include <stdio.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *p = (char *) malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = 0;

	return (p);
}
