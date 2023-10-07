#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem = 0;

	while (mem < n)
	{
		s[mem] = b;
		mem++;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *f;
	int a = size * nmemb;

	if (nmemb == 0 || size == 0)
		return (NULL);

	f = malloc(a);

	if (!f)
		return (NULL);

	_memset(f, 0, a);

	return (f);
}
