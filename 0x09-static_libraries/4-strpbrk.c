#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - This function that searches a string for any of a set of bytes.
 * @n: gets the argument from main.c.
 * @allow: gets the argument from main.c.
 *
 * Return: The output
 */

char *_strpbrk(char *n, char *allow)
{
	int a, b;

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; allow[b] != '\0'; b++)
		{
			if (n[a] == allow[b])
			{
				return (n + a);
			}
		}
	}
	return (0);
}
