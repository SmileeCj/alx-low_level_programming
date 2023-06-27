#include "main.h"

/**
 * swap_int - swap two values
 * @a: function first parameter
 * @b: function second parameter
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
