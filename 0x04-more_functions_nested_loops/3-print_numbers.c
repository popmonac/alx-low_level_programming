#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * print_numbers - This Function prints number from 0 - 9
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
