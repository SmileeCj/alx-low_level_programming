#include "main.h"


/**
 * _isalpha - function to start the program
 *
 * Description: function that checks for lowercase character
 *
 * @c: function parameter
 *
 * Return: returns 1  if `c` is a letter wither upercase or low
 *			otherwise returns 0
*/

int _isalpha(int c)
{

	if (c <= 122 && c >= 97 || c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
