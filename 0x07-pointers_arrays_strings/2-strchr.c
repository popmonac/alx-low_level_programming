#include <stdio.h>
#include "main.h"
/**
 * _strchr - this fuctions identify a character in a string
 *
 * @i: gets the string from main.c
 * @j: gets argument from to identify from main.c
 *
 * Return: The string after the character.
 */
char *_strchr(char *i, char j)
{
	while (*i)
	{
		if (*i == j)
		{
			return (i);
		}
		i++;
	}
	return (NULL);
}
