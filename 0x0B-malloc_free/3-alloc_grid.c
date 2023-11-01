#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - This function returns a pointer to two dimensional
 * arrays
 *
 * @width: gets the width of the array (child array)
 * @height: gets the height of the array (parent array)
 *
 * Return: returns 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int n;
	int **pt_parnt_2d_array;

	if (width <= 0 || height <= 0)
		return (NULL);

	pt_parnt_2d_array = (int **)(malloc(sizeof(int *) * height));

	if (pt_parnt_2d_array == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
		pt_parnt_2d_array[n] = (int *)(malloc(sizeof(int) * width));

	if (pt_parnt_2d_array == NULL)
		return (NULL);
	return (pt_parnt_2d_array);
}
