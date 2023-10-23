#include "main.h"
/**
 * print_integer - This function primt integers
 * @i: Fetches the argument
 * Return: Always 0
 */

void print_integer(int i)
{
	int j = 1000000000;

	for (; j >= 1; j /= 10)
	{
		if ((i / j) != 0)
		{
			_putchar((i / j) % 10 + '0');
		}
	}
}

/**
 * print_number - a function that prints an integer.
 * @k: An input integer
 * Return: Nothing
 */
void print_number(int k)
{
	if (k == 0)
		_putchar('0');
	else if (k < 0)
	{
		_putchar('-');
		print_integer(k * -1);
	}
	else
		print_integer(k);
}

