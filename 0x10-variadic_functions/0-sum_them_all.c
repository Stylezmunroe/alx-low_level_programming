#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of all parameters. If n is 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int sum = 0;

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
