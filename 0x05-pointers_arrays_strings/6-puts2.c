#include "main.h"

/**
 * puts2 - print character
 * @str: function parameter
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
