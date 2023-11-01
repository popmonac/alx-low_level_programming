#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - This function calculate the lenght of a string
 *
 * @s: gets the string from the funtion
 *
 * Return: Returns the lenght
 */
int _strlen(char *s)
{
	int n, length;

	for (n = 0; *(s + n) != '\0'; n++)
		length++;
	return (length);
}
/**
 * _strdup - This function returns a pointer to a newly allocated space
 * in memory,
 *
 * @str: gets the argument from main.c
 *
 * Return: This returns the value in the allocated memory
 */
char *_strdup(char *str)
{
	int n, lenght;
	char *pt_string;

	if (str == NULL)
		return (NULL);
	lenght = _strlen(str);
	pt_string = (char *)malloc((sizeof(char) * lenght) + 1);
	if (pt_string == NULL)
		return (NULL);
	for (n = 0; n < lenght; n++)
	{
		pt_string[n] = *(str + n);
	}
	return (pt_string);
}
