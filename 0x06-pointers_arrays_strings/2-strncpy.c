#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: function parameter one
 * @src: function parameter two
 * @n: number of bytes from src
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[i] = src[i];
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++
	}
	return (dest);
}
