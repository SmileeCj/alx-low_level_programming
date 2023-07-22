#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a newline
 * @array: array
 * @size: how many element to print
 * @action: pointer to print in regular or hex
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == 0 || action == 0)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

