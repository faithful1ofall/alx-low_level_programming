#include "main.h"

/**
 * _palprecheck - checks the characters recursively for palindrome
 * @s: string to check
 * @start: iterator
 * @end: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int _palprecheck(char *s, int start, int end)
{
	if (s[start] != s[end - 1])
		return (0);
	if (start >= end)
		return (1);
	return (_palprecheck(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (_palprecheck(s, 0, len));
}

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string
 * Return: length
*/

int _strlen_recursion(char *s)
{
	if (*s != 0)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
