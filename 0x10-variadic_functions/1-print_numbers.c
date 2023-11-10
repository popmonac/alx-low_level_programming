#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - This Fuction that print numbers
 *
 * @separator: Gets the spring seperate the integers
 * @n: Gets the integers to be used
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, unsigned int);
		printf("%d", j);

		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
