#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - This Print values in an array
 *
 * @array: gets the value from the array
 * @size: gets the size of the array
 * @action: This Funtion print the value in array
 * Return: Nothing
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;

	if (array == NULL || action == NULL)
		return;

	for (; n < size; n++)
	{
		action(array[n]);
	}
}
