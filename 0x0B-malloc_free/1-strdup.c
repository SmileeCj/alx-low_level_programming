#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: param1
 * Return: pointer or 0
 */
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *p;


	if (*str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}

	p = malloc(sizeof(*str) + 1 * size);

	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			p[i] = str[i];
			i++;
		}
	}
	return (p);
}
