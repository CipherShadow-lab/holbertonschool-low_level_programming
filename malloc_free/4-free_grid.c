#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees 2D array of integers
 * @grid: 2D array of integers to be freed
 * @height: height of grid
 * Return: Frees grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
