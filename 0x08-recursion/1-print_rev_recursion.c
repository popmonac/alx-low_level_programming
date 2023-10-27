#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - This function that strings in the reverse.
 *
 * @x: gets the argument that is the string
 *
 */

void _print_rev_recursion(char *x)
{
	if (*x == '\0')
	{
		return;
	}
	_print_rev_recursion(x + 1);
	_putchar(*x);
}

