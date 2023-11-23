#include <stdio.h>

/**
 * get_bit - This function returns the value of a bit at a given index.
 *
 * @i: The integer
 * @index: The position
 * Return: The bit
 */

int get_bit(unsigned long int i, unsigned int index)
{
	unsigned int bit_num;
	unsigned long int store_bit;
	int bit_amt;

	bit_num = sizeof(unsigned long int) * 8;
	if (index >= bit_num)
	{
		return (-1);
	}
	store_bit = i >> index;

	bit_amt = store_bit & 1UL;

	return (bit_amt);
}
