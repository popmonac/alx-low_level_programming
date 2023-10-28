#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * _islower - This Checks for lowercase alphabet
 *
 * @n: The Parameter that pases the arguments
 * Return: 1 (Lowercase)
 */

int _islower(int n)
{
	if (islower(n))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
