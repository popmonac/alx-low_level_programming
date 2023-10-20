#include <stdio.h>
#include "main.h"
/**
 * reverse_array - This function reverse integers
 *
 * @a: gets an integer
 * @n: gets the lenght of integer
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int letter;

	while (b < n--)
	{
		letter = a[b];
		a[b++] = a[n];
		a[n] = letter;
	}
}
