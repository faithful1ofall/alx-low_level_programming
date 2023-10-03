#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	unsigned int i = 0, len = 0;
	char *d;

	if (str == NULL)
		return (NULL);

	d = malloc(sizeof(char) * (len + 1));

	while (str[len])
		len++;

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != 0)
		i++;

	return (dup);
}
