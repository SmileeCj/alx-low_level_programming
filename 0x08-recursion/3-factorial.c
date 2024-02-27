#include "main.h"

/**
 * factorial - calcualte onf number n
 * @n : parameter
 * Return: Always returns int.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
