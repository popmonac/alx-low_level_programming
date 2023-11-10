#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - This funtion that print strings
 *
 * @separator: Gets the string that separate the strings
 * @n: Gets the number of string passed has the argument
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *string;
	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			printf("(nil)");
		if (string != NULL)
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (a < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
