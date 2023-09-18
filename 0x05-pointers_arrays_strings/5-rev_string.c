#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char amp;
	int len, len1, end;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;
	end = 0;

	while (len1 > end)
	{
		amp = s[end];
		s[end] = s[len1];
		s[len1] = amp;
		end++;
		len1--;
	}
}
