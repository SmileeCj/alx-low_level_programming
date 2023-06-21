#include "main.h"


/**
 * print_alphabet - function to start the program
 *
 * Description: prints the alphabet, in lowercase, from a to z
 *
 * Return: 0 (success)
*/

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}
