#include <stdio.h>
#include "main.h"
/**
 * _strncat - This function that concatenate next level
 *
 * @dis_ptr: gets the argument from main.c
 * @src: gets the argument from main.c
 * @i: getss the argument from main.c
 *
 * Return: Prints the dis_ptrination
 */
char *_strncat(char *dis_ptr, char *src, int i)
{
	char *pt, *st;
	int a, len = 0;

	pt = dis_ptr;
	st = src;
	while (*src != '\0')
	{
		len++;
		src++;
	}

	while (*dis_ptr != '\0')
	{
		dis_ptr++;
	}

	if (i > len)
		i = len;

	src = st;
	for (a = 0; a < i; a++)
	{
		*dis_ptr++ = *src++;
	}

	*dis_ptr = '\0';
	return (pt);
}
