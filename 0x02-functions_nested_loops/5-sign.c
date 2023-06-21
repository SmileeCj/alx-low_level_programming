#include "main.h"


/**
 * print_sign - function to start the program
 *
 * Description: function that checks for lowercase character
 *
 * @n: function parameter
 *
 * Return: returns 1 if `n` geater than 0 , return 0 if `n` equal 0
 *			otherwise returns -1
*/

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
