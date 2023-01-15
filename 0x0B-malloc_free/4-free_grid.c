#include "main.h"
/**
 * free_grid - free a two dimensional grid array
 * @grid: array
 * @height: height od string
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
