#include <stdio.h>
#include "main.h"
/**
 * _strcpy - This function copies the string pointed to by src.
 *
 * @dest: This is destination of the string pointer
 * @src: This pointer sources the string to copy from
 *
 * Return: get back to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for (; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
		return (dest);
}
