#include "main.h"

/**
 * print_diagonal - func draws a diagonal line on the terminal.
 * @n: is an int parameter
 * Return:nothing
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				if (j == i)
				{
					_putchar(92);
				} else
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
