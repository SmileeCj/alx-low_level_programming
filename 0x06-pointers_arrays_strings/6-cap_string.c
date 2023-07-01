#include "main.h"
#include <stdio.h>

/**
 * low - check if it lowercase
 * @c: function parameter one
 * Return: the character
 */

int low(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * delim - check if it delimiter
 * @c: function paramaeter
 * Return: 1 or 0
 */

int delim(char c)
{
	int i;
	char del[] = "\t\n,.!?\"(){}";

	for (i = 0; i <= 11; i++)
	{
		if (c == del[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - capitalize string
 * @a: function parameter one
 * Return: nothing
 */

char *cap_string(char *a)
{
	char *ptr = a;
	int isDel = 1;

	do {
		if (delim(*a))
		{
			isDel = 1;
		}
		else if (low(*a) && isDel)
		{
			*a -= 32;
			isDel = 0;
		}
		else
			isDel = 0;
		a++;

	} while (*a);

	return (ptr);

}
