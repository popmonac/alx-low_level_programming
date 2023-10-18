#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - printing lowercase alphabet [a..z] x10
 *
 * Return: (0)
 */
void print_alphabet_x10(void)
{
	char i, small;

	for (i = 0; i < 10; i++)
	{
		for (small = 'a'; small <= 'z'; small++)
		{
			_putchar(small);
		}
	_putchar('\n');
	}
}
