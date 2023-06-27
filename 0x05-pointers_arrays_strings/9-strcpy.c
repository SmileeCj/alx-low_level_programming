#include "main.h"

/**
 * *_strcpy - copy pointed string
 * @dest: function parameter one
 * @src: function parameter two
 * Return: pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
