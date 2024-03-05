#include "main.h"


/**
 * main - Entry point
 *
 * Description: print the sum of multiples
 * Return: Always 0 (success)
*/


int main(void)
{
	int i = 0, sum = 0;

	while (i < 1024)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
		}
		else
		{
			i++;
			continue;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
