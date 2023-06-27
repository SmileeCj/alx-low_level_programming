#include "main.h"

/**
 * *_strcpy - copy pointed string
 * @dest: function parameter one
 * @src: function parameter two
 * Return: pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = -1; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
