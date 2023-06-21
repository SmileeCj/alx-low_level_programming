#include "main.h"


/**
 * _abs - function to start the program
 *
 * Description: function that returns an absolute number
 *
 * @n: function parameter
 *
 * Return: returns n
*/

int _abs(int n)
{

	if (n < 0)
	{
		n *= (-1);
	}
	return (n);
	_putchar('\n');
}
