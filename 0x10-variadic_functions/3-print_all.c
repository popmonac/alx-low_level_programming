#include "variadic_functions.h"

/**
 * print_all - This prints all
 * @format: param
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int a = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[a])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[a] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case 'a':
				printf("%d", va_arg(valist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), c = 1;
				break;
			case 's':
				str = va_arg(valist, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} a++;
	}
	printf("\n"), va_end(valist);
}
