#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - This function searches a string for any of a set of bytes.
 * @s: gets the argument from main.c.
 * @accept: Fetches the argument from main.c.
 *
 * Return: The output
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; b++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
