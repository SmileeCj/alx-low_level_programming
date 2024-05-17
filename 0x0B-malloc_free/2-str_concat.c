#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat - concat two strings
* @s1: char pointer
* @s2: char pointer
* Description: creates a string by concat two strings
* Return: a pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, size_to = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		size1++;

	for (i = 0; s2[i] != '\0'; i++)
		size2++;

	size_to = size1 + size2;
	p = malloc((size_to + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		p[i] = s1[i];

	for (i = 0; i < size2; i++)
		p[size1 + i] = s2[i];

	p[size_to] = '\0';
	i = 0;

	return (p);
}
