#include "main.h"

/**
 * _isdigit - check if input is uppercase
 * @c: input
 * Return: 1 if its a digit else returns 0
 */

int _isdigit(int c)
{
	if (c > 49 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
