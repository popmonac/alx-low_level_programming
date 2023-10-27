#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - This function that raise a number to it index
 * @i: Fetches the integer to be raised it index
 *
 * @j: Fetches the index
 *
 * Return: Alwajs the output
 */

int _pow_recursion(int i, int j)
{
	if (j < 0)
		return (-1);
	if (j == 0)
		return (1);
	return (i * _pow_recursion(i, j - 1));
}
