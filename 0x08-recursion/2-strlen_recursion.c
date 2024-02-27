#include "main.h"

/**
 * _strlen_recursion - calcualte the length of string
 * @s : parameter
 * Return: Always returns int.
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
