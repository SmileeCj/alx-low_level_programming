#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
* print_all - print arguments
* @format: param1
*
* Description: print anything
*
* Return: nothing
*/


void print_all(const char * const format, ...)
{
	int i = 0;

	va_list args;
	char *str;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, (float)va_arg(args, double));
				break;
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";\

				printf("%s%s", sep, str);
				break;
		}
		sep = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
