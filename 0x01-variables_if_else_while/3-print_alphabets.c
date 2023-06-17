#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - function to start the program
 *
 * Description: print the alphabet lower and upper case
 *
 * Return: 0 (success)
*/
int main(void)
{
	char cha_1 = 'a';
	char cha_2 = 'A';

	while (cha_1 <= 'z')
	{
		putchar(cha_1);
		cha_1++;
	}
	while (cha_2 <= 'Z')
	{
		putchar(cha_2);
		cha_2++;
	}
	putchar('\n');

	return (0);
}
