#include <stdio.h>
#include "main.h"
/**
 * _strchr - This fuctions that identify a character in a string
 *
 * @i: Argument that gets the string from main.c
 * @j: Argument that gets the charater from to identify from main.c
 *
 * Return: The remain string after the character.
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
