#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_memset - function that fills memory
 * @s: memory area
 * @b: char
 * @n: parameter
 * Return: pointer
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of elements
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * sizeof(int));

	if (p == 0)
	{
		return (NULL);
	}

	_memset(p, 0, nmemb * sizeof(int));

	return (p);
}
