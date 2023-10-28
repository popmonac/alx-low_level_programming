#include <stdio.h>
#include "main.h"
/**
 * _memset - This function fills memory with a constant byte
 *
 * @x: This argument to be filled
 * @i: This argumenet that fills 's'
 * @j: The Number of byte
 *
 * Return: The byte stored in 'book'
 */
char *_memset(char *x, char i, unsigned int j)
{
	char *book = x;

	while (j--)
	{
		*x = i;
		x++;
	}
	return (book);
}
