#include "main.h"

/**
 * _pow_recursion - calcualte power of number n
 * @x : paramOne
 * @y : paramTwo
 * Return: Always returns int.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
