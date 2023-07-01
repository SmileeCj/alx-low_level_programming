#include "main.h"
#include <stdio.h>

/**
 * leet - turn letters to 1337
 * @c: function parameter one
 * Return: encoded letters
 */

char *leet(char *c)
{
	int *a = c;
	char k[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {4, 3, 0, 7, 1};
	int i;
	int size = sizeof(k);

	while (*c)
	{
		for (i = 0; i < size / sizeof(char); i++)
		{
			if (*c == k[i] || *c == k[i] + 32)
			{
				*c = 49 + num[i];
			}
		}
		return (c++);
	}
	return (a);
}
