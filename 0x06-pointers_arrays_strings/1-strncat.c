#include <stdio.h>
#include "main.h"
/**
 * _strncat - This function concatenate n  number of strings
 *
 * @dest: gets argument from main.c
 * @src: gets argument from main.c
 * @n: gets the argument from main.c
 *
 * Return: Prints the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = len_str(dest);
	int j;

	for (j = 0; j < n && *src != '\0'; j++)
	{
		dest[length + j] = src[j];
		src++
	}
	dest[length + j] = '\0';
	return (dest);
}
