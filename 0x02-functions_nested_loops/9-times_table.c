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

	for (i = 0; i <	10; i++)
	{
		_putchar(48);
		for (j = 0; j < 10; j++)
		{

			_putchar(44);
			_putchar(32);

			res = i * j;

			if (res < 10)
			{
				_putchar(32);
			}
			else
				_putchar((res / 10) + 48);

			_putchar((res % 10) + 48);
		}
		_putchar('\n');
	}
}
