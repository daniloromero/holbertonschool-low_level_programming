#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: columns of the grid
 * @height: rows of the grid:
 * Return:pointer to 2 dimension array
 */
int **alloc_grid(int width, int height)
{
	int **array = NULL;
	int i1;
	int i2;
	int x;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i1 = 0; i1 < height; i1++)
	{
		array[i1] = malloc(sizeof(int) * width);
		if (array[i1] == NULL)
		{
			for (x = 0; x < i1; x++)
				free(array[i1]);
			free(array);
			return (NULL);
		}
	}
	for (i1 = 0; i1 < height; i1++)
	{
		for (i2 = 0; i2 < width; i2++)
		{
			array[i1][i2] = 0;
		}
	}
	return (array);
}
