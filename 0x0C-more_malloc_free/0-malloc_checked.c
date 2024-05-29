#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - reserve memory in the Heap
* @b: unsigned param
* Description: reserve memory in the Heap,
* Return: a pointer
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(unsigned int) * b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
