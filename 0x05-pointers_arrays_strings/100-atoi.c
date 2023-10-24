#include <stdio.h>

/**
 * _atoi - This function converts string to integer
 * @k: gets the argument
 * Return: integer from conversion
 */
int _atoi(char *k)
{
	int sign = 1;	
	unsigned int total = 0;
	char break_signal = 0;

	while (*k)
	{
		if (*k == '-')
			sign *= -1;

		if (*k >= '0' && *k <= '9')
		{
			break_signal = 1;
			total = total * 10 + *k - '0';
		}

		else if (break_signal)
		{
			break;
		}
		k++;
	}

	if (sign < 0)
		total = total * -1;

	return (total);
}

