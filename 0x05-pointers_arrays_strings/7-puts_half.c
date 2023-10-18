#include <stdio.h>
#include "main.h"
/**
 * puts_half - This function prints half of a string,
 *
 * @str: gets the argument from main.c
 */
void puts_half(char *str)
{
	int num, i, lenght;

	for (lenght = 0; str[lenght] != '\0'; lenght++)
	{
	}
	if ((lenght % 2) != 0)
	{
		num = lenght - 1 / 2;
	}
	else
	{
		num = lenght / 2;
	}

	for (i = num; i < lenght; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
