#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - This function print diagonals of a tabulated number
 * @k: gets the array from main.c
 * @size: gets the array lenght from main.c
 */
void print_diagsums(int *k, int size)
{
	int j, i, l;
	unsigned int sum_1 = 0, sum_2 = 0;

	l = size - 1;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			if (j == i)
				sum_1 += *(k + j * size + i);
			if (i == l)
				sum_2 += *(k + j * size + i);
		}
		l--;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
