#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicate a string
* @str: char pointer
* Description: creates a duplicate sring,
* Return: a pointer
*/

char *_strdup(char *str)
{
	unsigned int size = 0;
	unsigned int i = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		size++;
		i++;
	}

	p = malloc((size + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = str[i];
	}
	p[size] = '\0';
	return (p);
}
