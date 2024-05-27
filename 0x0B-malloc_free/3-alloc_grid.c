#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - allcation of memory for 2D ARR
* @width: int
* @height: int
* Description: creates a 2D array
* Return: a pointer
*/

int **alloc_grid(int width, int height)
{
	int j,i;
	int **p;

	if (width == 0 || height == 0)
		return (NULL);

	p = (int **)malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		p[i] = (int *)malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for(j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
