#include "main.h"

/**
 * factorial - function that calculate the fact of a number n
 * @n: parameter
 * Return: the factorial
 *
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
