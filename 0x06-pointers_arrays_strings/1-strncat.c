#include <stdio.h>
#include "main.h"
/**
 * _strncat - This function concatenate n  number of strings
 *
 * @dest: gets argument from main.c
 * @src: gets argument from main.c
 * @n: gets the argument from main.c
 *
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n && src[z] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
