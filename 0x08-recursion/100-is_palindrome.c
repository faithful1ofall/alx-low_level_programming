#include "main.h"

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
  if (s[0] == s[len - 1])
    return (is_palindrome(s + 1));
  return (0);
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
