#include "main.h"

/**
 * rev_string - reverse string
 * @s: function parameter
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char swap;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < 1 / 2; j++)
	{
		swap = s[j];
		s[j] = s[i - i - j];
		s[i - i - j] = swap;
	}
}
