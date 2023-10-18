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
	char *word = dest;

	while (*src)
		*dest++ = *src++;
	return (word);
}
