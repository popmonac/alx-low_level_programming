#include <stdio.h>

/**
 * clear_bit - This function sets the value of a bit to 0 at a given index
 * @i: The integer
 * @index: The postion to be worked on
 *
 * Return: Always 1 (Success)
 */

int clear_bit(unsigned long int *i, unsigned int index)
{
	unsigned int bit = 0;
	unsigned long int mask_file = 0;

	bit = sizeof(unsigned long int) * 8;
	if (index >= bit)
	{
		return (-1);
	}
	mask_file = ~(1UL << index);
	*i &= mask_file;

	return (1);
}
