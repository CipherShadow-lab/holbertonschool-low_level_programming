#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers.
 * @width: width of grid
 * @height: height of grid
 * Return: Prints grid
 */

int **alloc_grid(int width, int height)
{
	int **rows;
	int *grid;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	rows = malloc(sizeof(int *) * height);
	if (rows == NULL)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int) * (width * height));
	if (grid == NULL)
	{
		free(rows);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		rows[i] = grid + (i * width);
	}
	for (i = 0; i < width * height; i++)
	{
		grid[i] = 0;
	}
	return (rows);
}
