#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - function to start the program
 *
 * Description: print the last digit of the number stored in the variable
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n;
	int last_dg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dg = n % 10;

	if (last_dg < 6 && last_dg != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dg);
	}
	else if (last_dg == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_dg);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dg);
	}
	return (0);
}
