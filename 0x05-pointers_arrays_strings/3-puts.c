#include "main.h"

/**
 * _puts - print a string
 * @str: function parameter
 * Return: nothing
 */

void _puts(char *str)
{
	do {
		_putchar(*str + 0);
		str++;
	} while (*str != '\0');

	_putchar('\n');
}
