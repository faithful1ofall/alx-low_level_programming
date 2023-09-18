#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char amp;
	int len = _strlen(s), len1;

	len1 = len - 1;

	while (len1 >= 0)
	{
		amp = s[0];
		s[len1--] = amp;
		len1--;
	}
}
