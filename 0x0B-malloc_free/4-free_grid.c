#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees the alloc memory
* @grid: the allocation function
* @height: the height of the grid
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
