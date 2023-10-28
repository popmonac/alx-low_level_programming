#include <stdio.h>
#include "main.h"
/**
 * _strncpy - This fuction that copies a string
 *
 * @dis_ptr: gets the destinaition array argument
 * @src: gets the string to be copind to the destinati	* on
 * @i: gets the amount of characters to print
 *
 * Return: prints destination arrrays
 */
char *_strncpy(char *dis_ptr, char *src, int i)
{
	int a = 0;

	if (dis_ptr == NULL || src == NULL || i == 0)
	{
		return (dis_ptr);
	}

	while (a < i && src[a] != '\0')
	{
		dis_ptr[a] = src[a];
		a++;
	}

	while (a < i)
	{
		dis_ptr[a] = '\0';
		a++;
	}

	return (dis_ptr);
}
