#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- function that prints 2d array
 * @width: int input for rows
 * @height: int input for columns
 * Return: a pointer of 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid_x;
	int i = 0, j = 0, x = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid_x = malloc(height * sizeof(int *));
	if (grid_x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid_x[i] = malloc(width * sizeof(int));
		if (grid_x[i] == NULL)
		{
			for (x = i - 1; x >= 0; x--)
			{
				free(grid_x[x]);
			}
			free(grid_x);
			return (NULL);
		}
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			grid_x[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid_x);
}
