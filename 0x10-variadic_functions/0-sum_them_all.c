#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum paramters.
 * @n: The number of paramters passed to the function.
 * @...: A var number of paramters to calculate the sum of.
 *
 * Return: the sum of parameters else returns 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0, add = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		add += va_arg(args, int);
		i++;
	}
	va_end(args);

	return (add);
}
