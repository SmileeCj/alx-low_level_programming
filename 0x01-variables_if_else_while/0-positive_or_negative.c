#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/** 
 * main function it print if a number equal zero, positive
 * or negative
 *
 * it return 0 if the process succed
 *
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else 
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
