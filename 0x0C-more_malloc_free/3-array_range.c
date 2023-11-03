#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - This function creates an array of integer
 *
 * @min: gets the lowest int from main.c
 * @max: gets the highest int from main.c
 *
 * Return: The arrays
 *
 */

int *array_range(int min, int max)
{
	int n, dif, *pt_array;

	if (min > max)
		return (NULL);
	dif = max - min;
	pt_array = malloc(sizeof(int) * (dif + 1));
	if (pt_array == NULL)
		return (NULL);
	for (n = 0; n <= dif; n++)
		pt_array[n] = min + n;
	return (pt_array);
}
