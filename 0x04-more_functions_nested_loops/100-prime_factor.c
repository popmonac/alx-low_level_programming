#include <stdio.h>

/**
 * main -The entry point
 * Return: (0)
 */
int main(void)
{
	unsigned long int i = 3, k = 612852475143;

	for (; i < 12050; i += 2)
	{
		while (k % i == 0 && k != i)
			k /= i;
	}
	printf("%lu\n", k);
	return (0);
}

