#include <stdio.h>

/**
 * flip_bits - This function returns the number of bits you
 * would need to flip to get from one number to another.
 *
 * @i: The integer
 * @j: flip integer
 *
 * Return: The results
 *
 */

unsigned int flip_bits(unsigned long int i, unsigned long int j)
{
	unsigned long int xorRes;
	unsigned int count = 0;

	xorRes = i ^ j;
	while (xorRes)
	{
		count += xorRes & 1;
		xorRes >>= 1;
	}

	return (count);
}
