#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: The string to be printed between strings.
 * @n: The number of strings
 * @...: A variable number of strings to be printed.
 *
 * Description: If one of the strings if NULL, (nil) is printed instead.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *st;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		st = va_arg(args, char*);
		st == NULL ? printf("(nil)") : printf("%s", st);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);

}
