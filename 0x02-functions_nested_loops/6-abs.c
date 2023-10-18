#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abs - This function computes the absolute value of integers.
 *
 * @j: Gets the value from main.c and send it to the funtion
 * Return: Always 0 (Success)
 */
int _abs(int j)
{
	if (j > 0)
	{
		return (j);
	}
	else
	{
		return (j * -1);
	}
}
