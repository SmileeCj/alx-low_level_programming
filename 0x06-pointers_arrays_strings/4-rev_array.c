#include "main.h"

/**
 * reverse_array - reverse an array content
 * @a: function parameter one
 * @n: swaped elements
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	i = 0;
	j = (n - 1);

	do {
		k = a[i];
		a[i] = a[j];
		a[j] = k;

		i++;
		j--;

	} while (i < j);
}
