#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - This function convert binary to unint
 * @n: The argument
 *
 * Return: Unsigned int
 */

unsigned int binary_to_uint(const char *n)
{
	unsigned int binary = 0;
	int i = 0;

	if (n == NULL)
		return (0);

	while (n[i] != '\0')
	{
		if (n[i] == '0')
		{
			binary = binary << 1;
		}
		else if (n[i] == '1')
		{
			binary = (binary << 1) | 1;
		}
		else
		{
			return (0);
		}

		i++;
	}
	return (binary);
}
