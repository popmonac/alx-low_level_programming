#include <stdio.h>
#include "main.h"

/**
 * factorial - This function that returns the factorial of a given function
 *
 * @i: Detche the argument from main.c
 *
 * Return: The factorial has output.
 */

int factorial(int i)
{
	if (i < 0)
	{
		return (-1);
	}
	else if (i == 0)
	{
		return (1);
	}
	return (i * factorial(i - 1));
}
