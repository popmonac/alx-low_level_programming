#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that sums number
 *
 * @n: Gets the integers to printed
 *
 * Return: sum of the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		if (n == 0)
			return (0);
		if (n > 0)
			sum += va_arg(args, unsigned int);
	}

	va_end(args);
	return (sum);
}
