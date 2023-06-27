#include "main.h"

/**
 * print_rev - print a reversed string
 * @s: function parameter
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i])
	{
		i++;
	}
	for (j = i; j > 0; j--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
