#include "function_pointers.h"
/**
 * int_index - return index place if compar = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == 0 || cmp == 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

