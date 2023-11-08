#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Returns the index of the number that compares
 *
 * @array: gets the array of number to be compare
 * @size: gets the size of the array
 * @cmp: Function that compares the integers
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	if (n == size)
		return (-1);
	return (-1);
}
