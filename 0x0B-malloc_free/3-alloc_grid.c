#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **a, i = 0, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	a = (int **) malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	while (i < height)
	{
		a[i] = (int *) malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			free(a);
			j = 0;
			while (j <= i)
			{
				free(a[j]);
				j++;
			}
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			a[i][j] = 0;
			j++;
		}
		i++;
	}
	return (a);
}
