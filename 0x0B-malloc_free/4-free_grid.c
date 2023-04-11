#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a dimensional grid
 * @grid: pointer to 2D arrays
 * @height: array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
