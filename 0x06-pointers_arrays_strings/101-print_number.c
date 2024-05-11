#include "main.h"
#include <stdio.h>

/**
 * print_number - print numbers
 * @n: function parameter one
 * Return: nothing
 */

void print_number(int n)
{
	int num, a;
	
	num = n;

	if (n < 0)
	{
		_putchar(45);
		num = n * -1;
	}

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}

	a = num % 10;
	_putchar(a + 48);
}
