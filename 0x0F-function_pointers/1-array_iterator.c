#include "function_pointers.h"

/**
* array_iterator - function that executes a function
* @array: param1
* @size: param2
* @action:param3
*
* Description: function that executes a function given as a parameter
*
* Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && size && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
