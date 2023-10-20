#include <stdio.h>
#include "main.h"
/**
 * string_toupper - This function convert lowercase to uppercase
 *
 * @a: gets the argument from main.c
 *
 * Return: Returns outcome
 */
char *string_toupper(char *a)
{
	char *word = b;

	while (*a != '\0')
	{
		if (*a >= 'a' && *a <= 'z')
		{
			*a -= 32;
		}
		b++;
	}
	return (word);
}
