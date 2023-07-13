#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * @size: param1
 * @c: param2
 * Return: pointer or 0
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(char) * size);

	if (p == NULL || size == 0)
		return (0);

	while (size--)
	{
		p[size] = c;
	}
	return (p);
}