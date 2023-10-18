#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen -This function returns the length of a string.
 *
 * @str: gets the arguments in the main.c
 * Return: Returns the lenght of the string.
 */
int _strlen(char *str)
{
	int i;
	int lenght = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		lenght += 1;
	}
	return (lenght);
}
/**
 * print_rev - This function prints and reverse a string
 * with a new line
 * @s: gets the argument
 */
void print_rev(char *s)
{
	int i, n;

	n = _strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
putchar('\n');
}
