#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - This fuction that checks for digit from 0 - 9
 *
 * @n: gets argument from main.c
 *
 * Return: Always 0
 */
int _isdigit(int n)
{
	if (isdigit(n))
	{
		return (1);
	}
	else
	{

		return (0);
	}
	return (0);
}
