#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * _islower - searches for lowercase alphabet
 *
 * @c: That gets the arguments
 * Return: (1) (Lowercase)
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
