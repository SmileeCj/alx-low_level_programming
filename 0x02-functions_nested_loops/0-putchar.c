#include "main.h"


/**
 * main - function to start the program
 *
 * Description: print _putchar
 *
 * Return: 0 (success)
*/
int main(void)
{
	int ch = 0;
	char sent[] = "_putchar";

	while (ch < 8)
	{
		_putchar(sent[ch]);
		ch++;
	}
	_putchar('\n');

	return (0);
}
