#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - function to start the program
 *
 * Description: print the alphabet lower without e and q
 *
 * Return: 0 (success)
*/
int main(void)
{
	char cha = 'a';

	while (cha <= 'z')
	{
		if (cha == 'e' || cha == 'q')
			cha++;
		putchar(cha);
		cha++;
	}
	putchar('\n');

	return (0);
}
