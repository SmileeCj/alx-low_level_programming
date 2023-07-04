#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: memory
 * @src: source
 * @n: length of source
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	for (int i = 0; n > i; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
