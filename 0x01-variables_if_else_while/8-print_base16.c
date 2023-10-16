#include <stdio.h>
/**
 * main - Entry point for the code
 *
 * Return: (0) (Success)
 */
int main(void)
{
	int num;
	char l;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 16) + '0');
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
		putchar('\n');
	return (0);
}
