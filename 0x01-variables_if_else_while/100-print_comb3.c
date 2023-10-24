#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is the entry point
 *
 * Return: (0)
 */
int main(void)
{
	int i;
	int b;

	for (i = 0; i <= 8; i++)
	{
		for (b = i + 1; b <= 9; b++)
		{
			if (i != b)
			{
				putchar(i + '0');
				putchar(b + '0');
				if (i == 8 && b == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
