#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously create * d
 * @grid: the address of the two dimensional grid
 * @height: height of the array
 * Return:sucess
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	
		free (grid);
}
