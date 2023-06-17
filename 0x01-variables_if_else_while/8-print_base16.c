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
	int num1 = 48;
	int num2 = 97;

	while (num1 <= 57)
	{
		putchar(num1);
		num1++;
	}
	while (num2 <= 102)
	{
		putchar(num2);
		num2++;
	}
	putchar('\n');

	return (0);
}
