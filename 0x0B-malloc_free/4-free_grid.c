#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: input matrix
 * @height: height of the matrix
 * Return: Always 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = (height - 1); i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
