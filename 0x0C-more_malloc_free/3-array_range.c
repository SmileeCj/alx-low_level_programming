#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - create int array
* @min: param 1
* @max: param 2
* Description: create int array
* Return: a pointer
*/

int *array_range(int min, int max)
{
	int size = 0, j = min, i = 0;
	int *p;

	size = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = j++;
	}
	return (p);
}
