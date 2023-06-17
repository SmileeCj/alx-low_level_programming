#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - function to start the program
 *
 * Description: print numbers and convert them to char
 *
 * Return: 0 (success)
*/
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
