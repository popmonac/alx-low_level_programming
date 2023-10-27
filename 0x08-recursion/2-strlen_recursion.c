#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - This funtions that return the string lenght
 *
 * @x: gets the argument from main.c
 *
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *x)
{
	if (*x == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(x + 1));
}
