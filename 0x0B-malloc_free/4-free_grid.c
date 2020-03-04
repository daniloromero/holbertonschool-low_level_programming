#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created by your alloc_grid
 * @grid:2 dimension array
 * @height: size:
 * Return:0  free memory
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
