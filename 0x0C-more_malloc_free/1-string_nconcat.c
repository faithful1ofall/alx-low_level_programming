#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates the bytes of a string to another string
 * @s1: string to be appended to
 * @s2: string to concatenate from
 * @n: bytes from s2 to concatenate to s1
 * Return: a pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *f;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		f = malloc(sizeof(char) * (len1 + n + 1));
	else
		f = malloc(sizeof(char) * (len1 + len2 + 1));

	if (f == NULL)
		return (NULL);

	while (i < len1)
	{
		f[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		f[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		f[i++] = s2[j++];

	f[i] = 0;

	return (f);
}
