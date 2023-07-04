#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - unction that prints the sum of the two diagonals
 * @a: 2d array
 * @size: size of array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int n1 = 0;
	int n2 = 0;

	while (i < size)
	{
		n1 += a[i];
		n2 += a[size - i - 1];
		a += size;
	}

	printf("%d, ", n1);
	printf("%d\n", n2);
}
