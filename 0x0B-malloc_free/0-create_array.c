#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - it create an array
* @size: unsigned int
* @c: array
* Description: creates an array of chars,
*		and initializes it with a specific char.
* Return: a pointer
*/

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size * sizeof(char));
	int i;

	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
