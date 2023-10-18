#include <stdio.h>
#include "main.h"
/**
 * swap_int - This function swap the contents of two variables
 *
 * @a: this gets the argument stated in main.c
 * @b: gets the argument in main.c
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
