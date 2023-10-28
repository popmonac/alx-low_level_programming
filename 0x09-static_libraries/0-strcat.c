#include <stdio.h>
#include "main.h"
/**
 * _strcat - This function concatenate two strings
 *
 * @dis_ptr: This gets the argument from the main.c
 * @src: This getss the argumnet from the main.c
 *
 * Return: Print pt that the dis_ptrination results
 */
char *_strcat(char *dis_ptr, char *src)
{
	char *pt = dis_ptr;

	while (*dis_ptr != '\0')
		dis_ptr++;

	while (*src != '\0')
		*dis_ptr++ = *src++;

	*dis_ptr = '\0';
	return (pt);
}
