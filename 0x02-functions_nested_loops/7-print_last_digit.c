#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - This function prints the last digit of numbers.
 *
 * @n: Get the argument from main.c
 *
 * Return: (0) (Success)
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
		d = -1 * (n % 10);
	else
		d = n % 10;

	_putchar((d % 10) + '0');
	return (d % 10);
}
