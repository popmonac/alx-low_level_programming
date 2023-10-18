#include <stdio.h>
#include "main.h"
/**
 * print_array - This function print arrays
 *
 * @a: gets argument from the main.c
 * @n: gets argument from the main.c
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
