#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isalpha - This fucntion search for Uppercase letter
 *
 * @c: get the argument to the function
 * Return: (1) (Success)
 */
int _isalpha(int c)
{
	if (isupper(c) || islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
