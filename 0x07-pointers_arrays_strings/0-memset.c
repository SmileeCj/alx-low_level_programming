#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: const
 * @n: bytes size
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n);
{

	for (unsigned int i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
