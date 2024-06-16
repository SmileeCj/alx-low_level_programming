#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* _realloc - reallocate memory
* @ptr: param 1
* @old_size: param 2
* @new_size: param 3
* Description: reallocate a new memory
* Return: a pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			p[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (p);
	}
		for (i = 0; i < new_size && i < old_size; i++)
			p[i] = ((char *)ptr)[i];
		free(ptr);
		return (p);
}
