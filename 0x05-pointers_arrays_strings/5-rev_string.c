#include <stdio.h>
#include "main.h"
/**
 * rev_string -This function reverses a string.
 *
 * @s: Gets the argument
 */
void rev_string(char *s)
{
	int lenght = 0, i = 0;
	char letter;

	while (s[lenght] != '\0')
		lenght++;

	while (i < lenght--)
	{
		letter = s[i];
		s[i++] = s[lenght];
		s[lenght] = letter;
	}
}
