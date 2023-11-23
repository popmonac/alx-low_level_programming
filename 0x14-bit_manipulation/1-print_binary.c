#include <stdio.h>
#include "main.h"
/**
 * print_binary - This function prints the binary representation of a number.
 * @i: The integer
 *
 * Return: Nothing
 */

void print_binary(unsigned long int i)
{
	int next_file = 0, confirm = 1, bits = 0;
	unsigned long int store = 0;

	next_file = sizeof(i) * 8 - 1;
	while (next_file >= 0)
	{
		store = 1UL << next_file;
		bits = (i & store) ? 1 : 0;

		if (bits || !confirm)
		{
			_putchar('0' + bits);
			confirm = 0;
		}

		next_file--;
	}

	if (confirm)
	{
		_putchar('0');
	}
}
