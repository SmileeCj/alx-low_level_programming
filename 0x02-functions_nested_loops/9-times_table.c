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

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 0; j <= 9; j++)
		{

			_putchar(44);
			_putchar(32);

			res = i * j;

			if (res <= 9)
			{
				_putchar(32);
			}
			else
			{
				_putchar((res / 10) + 48);
			}
			_putchar((res % 10) + 48);
		}
		_putchar('\n');
	}
}
