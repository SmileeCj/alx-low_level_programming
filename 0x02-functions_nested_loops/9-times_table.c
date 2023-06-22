#include "main.h"


/**
 * times_table - function to start the program
 *
 * Description: prints tables of nine
 *
*/

void times_table(void)
{
	int i;
	int j;
	int res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;

			_putchar(44);
			_putchar(32);

			if (res <= 9)
			{
				_putchar(32);
			}
			else
			{
				_putchar((res / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
