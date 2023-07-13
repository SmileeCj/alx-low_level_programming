#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a 2d array of integers
 * @width: param1
 * @height: param2
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (grid == 0 || height <= 0 || width <= 0)
	{
		return (NULL);
	}
	else
	{
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == 0)
		{
			while (i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (; j < width ; j++)
		{
			grid[i][j] = 0;
		}
	}

	}
	return (grid);
}
