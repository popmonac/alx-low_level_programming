#include <stdio.h>
#include "main.h"

/**
 * _memcpy - This funtion copies memory area
 * @dest: This argument filled with copied memory
 * @src: This argument fill the 'dest'
 * @n: Number of bytes
 *
 * Return: The filled 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *jotter = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (jotter);
}
