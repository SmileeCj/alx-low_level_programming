#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 * @s : pointer to string
 * Return : int
 */

int _strlen_recursion(char *s)
{
	static int i;

	if (s[i] == '\0')
	{
		int len = i;

		i = 0;
		return (len);
	}
	i++;
	return (_strlen_recursion(s));
}
