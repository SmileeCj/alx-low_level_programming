#include "main.h"

/**
 * _strspn - locates a character in a string
 * @s: string
 * @accept: bytes
 * Return: uns int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
		i++;
	}
	return (i);
}
