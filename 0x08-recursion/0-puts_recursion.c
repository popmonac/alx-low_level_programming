#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - This function write a string with a trailing to stdout.
 *
 * @x: gets the argument that is the string
 *
 */

void _puts_recursion(char *x)
{
	if (*x == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*x);
	x++;
	_puts_recursion(x);
}
