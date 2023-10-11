#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search inside
 * @size: size of the array
 * @cmp: pointer to compare function
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
