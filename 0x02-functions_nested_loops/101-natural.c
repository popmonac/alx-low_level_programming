#include <stdio.h>
#include <stdlib.h>

/**
 * multiples - This function checks for the multiples if 3 and
 *
 * Return: (0)
 */

void multiples(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			j += i;
		}
	}
printf("%d\n", j);
}

/**
 * main - this function call the multiple function
 *
 * Return: Always 0
 */
int main(void)
{
	multiples();
	return (0);
}

