#include "main.h"

/**
 * print_line - func draws a straight line in the terminal
 * @n: is an int parameter
 * Return:nothing
 */

void print_line(int n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		} else
		{
			for (int i = 1; i <= n; i++)
			{
				_putchar('-');
			}
			_putchar('\n');
		}
	}
