#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int f = 0;

	while (s[f] != '\0')
	{
		if (s[f] >= 'a' && s[f] <= 'z')
		{
			s[f] = s[f] - 32;
		}
		f++;
	}

	return (s);
}
