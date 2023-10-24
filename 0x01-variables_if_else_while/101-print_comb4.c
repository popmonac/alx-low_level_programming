#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This entry point
 *
 * Return: (0)
 */

int main(void)
{
	int k;
	int b;
	int c;

	for (k = 0; k <= 7; k++)
	{
		for (b = k + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				if (k != b && b != c)
				{
					putchar(k + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (k == 7 && b == 8 && c == 9)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
putchar('\n');
return (0);
}
