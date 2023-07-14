#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - function that prints a reversed string
 * @s1: pointer1
 * @s2: pointer2
 * @n: parameter
 * Return: pointer
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int ln1 = 0;
	unsigned int ln2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[ln1] != '\0')
	{
		ln1++;
	}
	while (s2[ln2] != '\0')
	{
		ln2++;
	}
	c = malloc(ln1 + n + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
