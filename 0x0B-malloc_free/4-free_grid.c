#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - This function frees a 2D array of previously
 * createdint int by the malloc_grid function
 * @grid: gets the 2D array of integers to free
 * @height: (Parent array) of grid
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int n = 0;

	if (grid == NULL)
		return;
	for (; n < height; n++)
		free((int *)grid[n]);
	free(grid);
}
