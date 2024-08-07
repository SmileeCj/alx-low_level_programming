#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - sum numbers
* @n: param1
*
* Description: sum of args
*
* Return: int
*/

int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
