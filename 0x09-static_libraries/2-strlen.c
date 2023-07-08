#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: function parameter
 * Return: string's length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != 0)
	{
		s++;
		i++;
	}

	return (i);
}
