#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - This function create a allocation in memory
 *
 * @k: gets the amount of byte to created
 *
 * Return: Termination
 */

void *malloc_checked(unsigned int k)
{
	char *ptr;

	ptr = malloc(k);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
