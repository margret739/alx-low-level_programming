#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees an array
 * @height: height of grid
 * @grid: 2d grid
 * Return: 0
 */

void free_grid(int **grid, int height)

{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
