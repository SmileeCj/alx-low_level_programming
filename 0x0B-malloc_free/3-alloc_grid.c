#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - concat two strings
* @width: int
* @height: int
* Description: creates a 2D array
* Return: a pointer
*/

int **alloc_grid(int width, int height)
{
	int i;
	int **p;

	if (width == 0 || height == 0)
		return (NULL);

	p = (int **)calloc(height, sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		p[i] = (int *)calloc(width, sizeof(int));

	return (p);
}
