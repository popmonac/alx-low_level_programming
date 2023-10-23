#include <stdio.h>
#include <stdlib.h>
/**
 * main - This Function of fizz-Buzz game
 *
 * Return: (0)
 */
int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
		printf("%d ", i);
		}
		if (i < 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
