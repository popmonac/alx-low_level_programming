#include <stdio.h>
#include "main.h"
/**
 * print_triangle - This Function that print i triangle
 *
 * @size: Fetches the argument from main.c
 */
void print_triangle(int size)
{
	int i, j, k;

	k = size;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j < k)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
			k--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
