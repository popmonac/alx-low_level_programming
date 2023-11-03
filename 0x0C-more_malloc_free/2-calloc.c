#include <stdlib.h>
#include "main.h"

/**
 * _calloc - This function create in malloc
 *
 * @nmemb: gets the argument for the arrayt from main.c
 * @size: gets the size of the data type
 *
 * Return: The array formation
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt_array;
	unsigned int n;

	if (size == 0 || nmemb == 0)
		return (NULL);

	pt_array = malloc(size * nmemb);
	if (pt_array == NULL)
		return (NULL);
	for (n = 0; n < (nmemb * size); n++)
		pt_array[n] = 0;
	return ((void *)pt_array);
}
