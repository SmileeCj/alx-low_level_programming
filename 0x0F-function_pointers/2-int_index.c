#include "function_pointers.h"

/**
* int_index - function that searches for an integer
* @array: param1
* @size: param2
* @cmp:param3
*
* Description: function that executes a function given as a parameter
*
* Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		while (i++ < size)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
