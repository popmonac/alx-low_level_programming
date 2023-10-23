#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen - This function returns the length of a string.
 *
 * @s: get the arguments from the main.c
 * Return: The string.
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len += 1;
	}
	return (len);
}
