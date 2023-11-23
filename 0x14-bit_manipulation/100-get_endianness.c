#include <stdio.h>

/**
 * get_endianness - This function checks the endianness.
 *
 * Return: Always 1 (On Success)
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte;

	byte = (char *)&num;
	if (*byte == 1)
		return (1);
	else
		return (0);
}
