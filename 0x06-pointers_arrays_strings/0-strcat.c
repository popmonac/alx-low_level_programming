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
	int len_dest = 0;
	int len_src = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		len_dest++;

	for (i = 0; src[i] != '\0'; i++)
		len_src++;

	for (i = 0; i <= len_src; i++)
		dest[len_dest + i] = src[i];
	return (dest);
}
