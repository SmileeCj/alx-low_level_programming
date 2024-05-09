#include "main.h"

/**
 * reverse_array - reverse string
 * @a: function parameter one
 * @n: function parameter two
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int s = n / 2;
	int *p = a + (n - 1);
	int tmp = 0, i = 0;

	while (p > a + s)
	{
		tmp = *p;
		*p = a[i];
		a[i] = tmp;
		p--;
		i++;
	}
}
