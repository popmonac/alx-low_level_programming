#include <stdio.h>
#include "main.h"
/**
 * spacing_format - This Function print the arguments passed for more_numbers
 * passed in and also format it
 *
 * @k: gets the argument from more_numbers
 * Return: (0)
 */
int spacing_format(int k)
{
	if (k > 9)
	{
		_putchar((k / 10) + '0');
	}
	_putchar((k % 10) + '0');
	return (0);
}

/**
 * more_numbers - This print 0 - 14 x 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			spacing_format(j);
		}
		_putchar('\n');
	}
}
