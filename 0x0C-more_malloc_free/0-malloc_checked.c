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
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
