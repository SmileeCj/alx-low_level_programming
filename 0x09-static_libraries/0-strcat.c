#include "main.h"

/**
 * _strcat - concatinate two strings
 * @dest: function parameter one
 * @src: function parameter two
 * Return: pointer to `dest`
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	do {
		a++;
	} while (dest[a]);

	while (src[b])
	{
		dest[a++] = src[b];
		b++;
	}
	return (dest);
}
