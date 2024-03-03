#include "main.h"

/**
 * check - check if a number is prime
 * @x : paramOne
 * @a : paramTwo
 * Return: Always returns int.
 */

int check(int x, int a)
{
	if (a >= x)
	{
		return (1);
	}
	else if (x % a == 0)
	{
		return (0);
	}
	else
	{
		return (check(x, a + 1));
	}
}

/**
 * is_prime_number - it check if n is prime
 * @n : paramOne
 * Return: Always returns int.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (check(n, 2));
}
