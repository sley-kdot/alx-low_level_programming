#include "main.h"
#include <stdlib.h>

/**
* free_grid - function that frees a 2 dimensional grid previously
* created by your alloc_grid function.
* @grid: input
* @height: input
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	while (i < height)
	{
		free(grid[i]);
		grid[i] = NULL;
		i++;
	}
	free(grid);
	grid = NULL;
}
