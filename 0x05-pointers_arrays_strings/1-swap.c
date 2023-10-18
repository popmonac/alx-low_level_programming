#include <stdio.h>
#include "main.h"
/**
 * 
 *
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
