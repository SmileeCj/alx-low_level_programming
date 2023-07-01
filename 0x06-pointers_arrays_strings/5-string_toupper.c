#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @a: function parameter one
 * Return: nothing
 */

char *string_toupper(char *a)
{
	int i = 0;

	for (; a[i] != '\0'; i++)
	{
		if (a[i] <= 122 && a[i] >= 97)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
