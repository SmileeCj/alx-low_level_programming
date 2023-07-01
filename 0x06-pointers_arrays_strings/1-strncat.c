#include "main.h"

/**
 * _strncat - concatinate two strings
 * @dest: function parameter one
 * @src: function parameter two
 * @n: number of bytes from src
 * Return: pointer to `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	do {
		a++;
	} while (dest[a]);

	while (b < n && src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';

	return (dest);
}
