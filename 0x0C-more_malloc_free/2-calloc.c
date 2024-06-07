#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocate memory
* @nmemb: param 1
* @size: param 2
* Description: allocate memory
* Return: a pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, total;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total = nmemb * size;

	p = malloc(total);
	if (p == NULL)
	{
		return (NULL);
	}

	while (i < total)
	{
		p[i++] = 0;
	}
	return (p);
}
