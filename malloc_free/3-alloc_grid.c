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
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	rows = malloc(sizeof(int *) * height);
	if (rows == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		rows[i] = malloc(sizeof(int) * width);
		if (rows[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(rows[j]);
			}
			free(rows);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			rows[i][j] = 0;
		}
	}
	return (rows);
}
