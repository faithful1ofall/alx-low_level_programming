#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char amp;
	int len, end, sta;

	while (s[len] != '\0')
	{
		len++;
	}

	end = len - 1;
	sta = 0;

	while (sta > end)
	{
		amp = s[sta];
		s[start] = s[end];
		s[end] = amp;
		end++;
		len1--;
	}
}
