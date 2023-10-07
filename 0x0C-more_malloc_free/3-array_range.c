#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *f;
	int i = 0, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	f = calloc(s, sizeof(int));

	if (!f)
		return (NULL);

	while (min <= max)
	{
		f[i] = min++;
		i++;
	}
	return (f);
}
