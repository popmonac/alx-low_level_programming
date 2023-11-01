#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - This function create an arrays of characters
 * 
 * @size: gets the size to be allocated to HEEP SEGMENT
 * @c: gets the character to filled in that memory
 *
 * Return: The memory with the Filled Array
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *pt_array;

	if (size == 0)
		return (NULL);
	pt_array = (char *)malloc(sizeof(char) * size);
	if (pt_array == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		pt_array[n] = c;
	return (pt_array);
}
