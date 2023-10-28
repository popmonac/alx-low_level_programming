#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
/**
 * _isalpha - This fucntion that checks for Uppercase alphabet
 *
 * @n: gets the argument passe to the function
 * Return: 1 (Success)
 */
int _isalpha(int n)
{
	if (isupper(n) || islower(n))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
