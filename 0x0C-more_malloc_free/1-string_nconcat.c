#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatinate nstring
* @s1: char param
* @s2: char param
* @n: unsigned int param
* Description: concatinate two strings,
* Return: a pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len_1 = 0, len_2 = 0, len_t = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_1 = strlen(s1);
	len_2 = strlen(s2);

	if (n >= len_2)
	{
		len_t = len_1 + len_2;
		p = malloc(sizeof(char) * (len_t + 1));
	} else
	{
		len_t = len_1 + n;
		p = malloc(sizeof(char) * (len_t + 1));
	}
	if (p == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (i < len_t)
	{
		p[i++] = s2[j++];
	}
	p[i] = '\0';
	return (p);
}
