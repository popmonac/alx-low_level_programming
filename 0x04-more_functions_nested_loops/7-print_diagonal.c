#include "main.h"

/**
 * print_diagonal - This Function draws a diagonal line on the terminal.
 * @k: Fetches the integer from main.c
 * Return: Always 0
 */
void print_diagonal(int k)
{
	int i = 0, j;

	if (k > 0)
	{
		for (; i < k; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
		}
}
