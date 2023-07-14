#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *p;
	int i = 0;
	int s = 0

	if (min > max)
		return (NULL);

	s = max - min + 1;

	p = malloc(sizeof(int) * s);

	if (p == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		p[i] = min++;
		i++;
	}
	return (p);
}

