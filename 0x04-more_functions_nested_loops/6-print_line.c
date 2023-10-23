#include <stdio.h>
#include "main.h"
/**
 * print_line - This Function that print line
 *
 * @j: gets the argument for main.c
 *
 */
void print_line(int j)
{
	int i = 0;

	if (j > 0)
	{
		for (; i < j; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}
