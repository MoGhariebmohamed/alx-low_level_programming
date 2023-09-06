#include <stdlib.h>
#include "main.h"
/**
 *free_grid - for free an array of int
 *description: this function for free array of aLOC
 *@grid:  array
 *@height: array height
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
