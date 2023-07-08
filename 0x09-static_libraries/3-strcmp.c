#include "main.h"

/**
 * _strcmp - copies a string
 * @s1: function parameter one
 * @s2: function parameter two
 * Return: 1 if true 0 if false
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	do {
		if (*s1 != *s2)
		{
			i = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	} while (*s1);

	return (i);
}
