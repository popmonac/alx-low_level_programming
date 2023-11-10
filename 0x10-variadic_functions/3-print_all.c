#include "variadic_functions.h"
#include <stdarg.h>
#include <ctype.h>

/**
 * print_all - prints all
 * @format: param
 */

void print_all(const char * const format, ...)
{
	int a, b;
	char *word;

	va_list args;

	va_start(args, format);

	for (a = 0; format[a]; a++)
	{
		word = va_arg(args, char *);
		if (isdigit(word))
		{
			_putchar(*word);
			continue;
		}

		for (b = 0; word[a]; b++)
			_putchar(word[a]);
	}
	va_end(args);
}
