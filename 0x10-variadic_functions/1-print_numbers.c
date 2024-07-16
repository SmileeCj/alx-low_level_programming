#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - print argument int
* @separator: param1
* @n: param2
*
* Description: print number of args
*
* Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	if (separator != NULL)
	{
		va_list ap;
		unsigned int i;
		int num = 0;

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			num = va_arg(ap, int);
			if (i > 0)
			{
				printf("%s", separator);
			}
			printf("%d", num);
		}

		printf("\n");
		va_end(ap);
	}
}
