#include "main.h"i
#include <stdio.h>

int sqr(int n, int i);

/**
 * _sqrt_recursion - function calculate power of an number
 * @n: parameter1
 * Return: square root
 *
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}


/**
 * sqr - function to find square root
 * @i: parameter2
 * @n: param
 * Return: int number
 */


int sqr(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (sr(n, i + 1));
	}
	else
		return (-1);
}
