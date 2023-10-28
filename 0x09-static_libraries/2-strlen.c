#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen - This function that returns the length of a string.
 *
 * @x: gets the arguments from the main.c
 * Return: The lenght of the string.
 */
int _strlen(char *x)
{
	int i;
	int lenght = 0;

	for (i = 0; x[i] != '\0'; i++)
	{
		lenght += 1;
	}
	return (lenght);
}
