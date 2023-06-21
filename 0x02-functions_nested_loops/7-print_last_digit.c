#include "main.h"


/**
 * print_last_digit - function to start the program
 *
 * Description: function that print last digit
 *
 * @n: function parameter
 *
 * Return: returns last digit
*/

int print_last_digit(int n)
{
	int dig;

	if (n < 0)
	{
		dig = (-1) * (n % 10);
	}
	else
	{
		dig = (n % 10);
	}
	_putchar(dig + '0');
	return (dig);

	_putchar('\n');

}
