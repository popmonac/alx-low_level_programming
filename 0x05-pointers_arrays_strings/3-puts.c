#include <stdio.h>
#include "main.h"
/**
 * _puts - This function prints a string using puts with a new line, to stdout
 *
 * @str: get the output from main.c.
 */
void _puts(char *str)
{
	int i;
	char letter;

	for (i = 0; str[i] != '\0'; i++)
	{
		letter = str[i];
		_putchar(letter);
	}
_putchar('\n');
}
