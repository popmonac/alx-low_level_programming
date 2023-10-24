#include <stdio.h>
#include "main.h"
/**
 * spacing_format - This function provide space for the arrangements
 *
 * @i: gets the answer for call function
 */
void spacing_format(int i)
{
	if (i <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(i + '0');
	}
	else if (i > 9 && i <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(i / 100 + '0');
		_putchar(i / 10 % 10 + '0');
		_putchar(i % 10 + '0');
	}
}


/**
 * print_times_table - Function that creates a multiplication table
 *
 * @n: It fetch the argument from the main.c
 */
void print_times_table(int n)
{
	int i, k;

	if (n >= 0 && n <= 13)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (k = 1; k <= n; k++)
			{
				spacing_format(i * k);
			}
			_putchar('\n');
		}
	}
}
