#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* argstostr - concatinate strings
* @ac: length of arra
* @av: array of strings
* Description: concatinate strings dynamically
* Return: pointer to char
*/

char *argstostr(int ac, char **av)
{
	int count = 0, i, n = 0, j, limit, char_n = 0;
	char *p;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		n++;
	}

	limit = count + n;

	p = (char *) malloc(sizeof(char) * (limit + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[char_n++] = av[i][j];
		}
		p[char_n++] = '\n';
	}
	p[char_n] = '\0';

	return (p);
}

