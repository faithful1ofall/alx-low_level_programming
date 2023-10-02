#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i = 0, d = 0, n = 0, len = 0, f = 0, digit;

	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 * Return: 0 means Successful, or 1 means successful
 */
int main(int argc, char *argv[])
{
	int sum = 0, num, i = 0, j, k = 0;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error");
				return (1);
			}
			j++;
		}
		i++;
	}

	while (k < argc)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
		k++;
	}

	printf("%i\n", sum);
	return (0);
}
