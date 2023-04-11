#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Entry point
 * @grid: 2d grid
 * @height: height dimension
 * Description: frees memory
 * Return: 0.
 *
 */
void free_grid(int **grid, int height)
{
	int i;
	/* frees memory*/

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
