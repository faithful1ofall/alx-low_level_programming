#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char amp;
	int len, len1;

	len = 0;
	amp = s[len];

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	while (len1 >= 0)
	{
		amp = s[len1--];
		len1--;
	}
}
