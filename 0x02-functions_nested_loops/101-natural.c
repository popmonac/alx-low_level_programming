#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function checks for the multiples if 3 and
 *
 * Return: (0)
 */

void main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}
		a++;
	}
	printf("%d\n", b);
	return (0);
}

