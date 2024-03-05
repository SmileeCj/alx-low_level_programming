#include "main.h"


/**
 * print_times_table - print n times table
 *
 * @n : Parameter
 * Return: void.
*/

void print_times_table(int n)
{
	int i, j, result = 1;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = j * i;
			if (j == 0 || (j == 0 && result > 9))
			{
				printf("%d", result);
			}
			else if (result > 9 && result <= 99)
			{
				printf(",  %d", result);
			}
			else if (result > 99 && result <= 999)
			{
				printf(", %d", result);
			}
			else if (result > 999)
			{
				printf("%d", result);
			}
			else
				printf(",   %d", result);
		}
		printf("\n");
	}
}
