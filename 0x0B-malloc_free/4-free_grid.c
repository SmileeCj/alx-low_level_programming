#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - free a 2D array
* @grid: 2d array
* @height: int
* Description: free a 2D array
* Return: nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

	grid = NULL;

}
