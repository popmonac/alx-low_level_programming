#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index.
 *
 * @i: The integer
 * @index: The position to eb workied on
 * Return: Always 1 (Success)
 */

int set_bit(unsigned long int *i, unsigned int index)
{
	unsigned long int store = 0;
	unsigned int bit = 0;

	bit = sizeof(unsigned long int) * 8;
	if (index >= bit)
	{
		return (-1);
	}
	store = 1UL << index;

	*i |= store;

	return (1);
}
