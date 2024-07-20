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

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
		}
		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}
	va_end(args);
	printf("\n");
}
