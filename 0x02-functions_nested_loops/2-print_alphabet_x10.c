#include "main.h"


/**
 * print_alphabet_x10 - function to start the program
 *
 * Description: prints 10 times the alphabet, in lowercase
 *
 * Return: 0 (success)
*/

void print_alphabet_x10(void)
{
	int ch = 'a';
	int i = 1;

	while (i <= 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}

}
