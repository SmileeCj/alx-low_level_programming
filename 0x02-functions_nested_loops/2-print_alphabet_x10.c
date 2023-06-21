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
	int ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; c <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
