#include "main.h"
#include <stdio.h>

/**
 * leet - turn letters to 1337
 * @c: function parameter one
 * Return: encoded letters
 */

char *leet(char *c)
{
	char alf[] = "AEOTLaeotl";
	char num[] = "4307143071";
	int i = 0, j;
	char *p = c;

	for (; c[i] != '\0'; i++)
	{
		for (j = 0; alf[j] != '\0'; j++)
		{
			if (alf[j] == c[i])
			{
				p[i] = num[j];
				break;
			}
				p[i] = c[i];
		}
	}
	p[i + 1] = '\0';

	return (p);
}
