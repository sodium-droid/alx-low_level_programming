#include "main.h"

/**
 *free_grid - frees the memory
 *allocated by alloc_grid function
 *@grid: point to grid (or array) to free.
 *@height: required rows of the grid
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
	free(grid[i]);

free(grid);
}
