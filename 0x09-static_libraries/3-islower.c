#include "main.h"


/**
 * _islower - function to start the program
 *
 * Description: function that checks for lowercase character
 *
 * @c: function parameter
 *
 * Return: returns 1  if `c` is lowercase otherwise returns 0
*/

int _islower(int c)
{

	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
