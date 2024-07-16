#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - print arguments
* @separator: param1
* @n: param2
*
* Description: print strings of arguments
*
* Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{

		va_list ap;
		unsigned int i;
		char *str;

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char *);
			if (i > 0 && separator)
			{
				printf("%s", separator);
			}
			if (!str)
			{
				printf("nil");
			}
			else
				printf("%s", str);
		}

		printf("\n");
		va_end(ap);
}
