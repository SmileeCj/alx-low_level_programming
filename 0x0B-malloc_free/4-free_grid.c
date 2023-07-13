#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2D grid
 * @grid: param1
 * @height: param2
 * Return: NOTHING
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
