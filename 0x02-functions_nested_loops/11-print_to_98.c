#include "main.h"


/**
 * print_to_98 - function to start the program
 *
 * Description: print starting from the input number to 98
 *
 * @n: parameter
 *
*/

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");

}
