#include <stdio.h>
#include <ctype.h>
/**
 * _isupper This function that checks for Uppercase or Lowercase
 *
 * @i: gets the argument from main.c
 * Return: Always 0
 */
int _isupper(int i)
{
	if (isupper(i))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
