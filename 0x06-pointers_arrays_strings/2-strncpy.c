#include <stdio.h>
#include "main.h"
/**
 * _strcat - This function concatenate two strings
 *
 * @dest: get an argument from the main.c
 * @src: get an argumnet from the main.c
 *
 * Return: Print pt that the destination results
 */
char *_strcat(char *dest, char *src)
{
	int j = 0;

	if (dest == NULL || src == NULL || n == 0)
	{
		return (dest);
	}

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
