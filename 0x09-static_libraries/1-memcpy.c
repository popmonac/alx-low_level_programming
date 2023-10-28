#include <stdio.h>
#include "main.h"

/**
 * _memcpy - This funtion that copies memory area
 * @dis_ptr: Argument to be filled with copied memory
 * @src: Argument to fill the 'dis_ptr'
 * @i: Number of bytes
 *
 * Return: The filled 'dis_ptr'.
 */
char *_memcpy(char *dis_ptr, char *src, unsigned int i)
{
	char *book = dis_ptr;

	while (i--)
	{
		*dis_ptr = *src;
		dis_ptr++;
		src++;
	}
	return (book);
}
