#include "main.h"

/**
 * _print_rev_recursion - prints a revesed string, followed by a new line
 * @s : pointer to string
 * return : nothing
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		putchar('\n');
		--i;
		return;
	}
	else
	{
		_print_rev_recursion(&s[i] + 1);
	}
	putchar(s[i]);
}
