#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory
 * @grid : target grid
 * @height: cordinate one
 *
 * Return: void
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
