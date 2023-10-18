#include <stdio.h>
#include "main.h"
/**
 * puts2 - This function prints the characters of a string
 *
 * @str: gets the argument
 */
void puts2(char *str)
{
	int lenght = 0, i = 0;

	for (; str[lenght] != '\0'; lenght++)
	{
	}
	lenght -= 1;

	for (; i <= lenght; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
