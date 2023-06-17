#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - function to start the program
 *
 * Description: print reversed alphabet
 *
 * Return: 0 (success)
*/
int main(void)
{
	char cha = 'z';

	while (cha >= 'a')
	{
		putchar(cha);
		cha--;
	}
	putchar('\n');

	return (0);
}
