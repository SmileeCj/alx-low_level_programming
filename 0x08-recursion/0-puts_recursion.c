#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s : pointer to string
 * return : nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar(s[i]);
	}
	_puts_recursion(&s[i] + 1);
}
