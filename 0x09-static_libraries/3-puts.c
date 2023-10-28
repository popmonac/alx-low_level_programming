#include <stdio.h>
#include "main.h"
/**
 * _puts - This function that prints a string using puts,
 * followed by a new line, to stdout.
 *
 * @str: gets the output from main.c.
 */
void _puts(char *str)
{
	int n;
	char word;

	for (n = 0; str[n] != '\0'; n++)
	{
		word = str[n];
		_putchar(word);
	}
_putchar('\n');
}
