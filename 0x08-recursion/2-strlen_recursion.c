#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 * @s : pointer to string
 * Return : integer
 */

int _strlen_recursion(char *s)
{
	char *p = s;

	if (*p == '\0')
	{
		return (0);
	}
	p++;
	return (_strlen_recursion(p) + 1);
}
