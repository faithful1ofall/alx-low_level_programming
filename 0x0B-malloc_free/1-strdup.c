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
	char *dup = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != 0)
		i++;

	return (dup);
}
